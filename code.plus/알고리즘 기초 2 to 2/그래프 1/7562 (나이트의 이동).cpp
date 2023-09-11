// acmicpc 7562
// authored by jihwankim
// code.plus
// 23-09-10 AM 04:17
#include <bits/stdc++.h>

using namespace std;

int n;
pair<int, int> s;
pair<int, int> ext;
int arr[305][305];

int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

void input() {
	cin >> n;
	cin >> s.first >> s.second;
	cin >> ext.first >> ext.second;
	
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			arr[i][j] = 0;
		}
	}
}

void solve() {
	queue<pair<int, int>> q;
	q.push(s);
	arr[s.first][s.second] = 1;
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second; q.pop(); 
		
		if(x == ext.first && y == ext.second) {
			cout << arr[x][y]-1 << '\n';
			return ;
		}
		
		for(int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			
			if(nx < 0 || nx >= n) continue;
			if(ny < 0 || ny >= n) continue;
			if(arr[nx][ny] > 0) continue;
			
			arr[nx][ny] = arr[x][y] + 1;
			q.push({nx, ny});
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		input();
		solve();	
	}
	
	return 0;
}
// AM 04:31
