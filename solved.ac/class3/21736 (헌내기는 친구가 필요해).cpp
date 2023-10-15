// acmicpc 21736
// authored by jihwankim
// solved.ac Class 3
// 23-10-12 PM 05:31
#include <bits/stdc++.h>

using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
bool visited[600][600];
int n, m;
vector<string> arr;
int x, y;

void input() {
	cin >> n >> m;
	bool find_doyeon = false;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		arr.push_back(s);
		if(!find_doyeon) {
			for(int j = 0; j < m; j++) {
				if(arr[i][j] == 'I') {
					find_doyeon = true;
					x = i, y = j;
					break;
				}
			}
		}
	}
}

void solve() {
	queue<pair<int, int>> q;
	q.push({x, y});
	visited[x][y] = true;
	int count = 0;
	
	while(!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();	
		if(arr[x][y] == 'P') count++;
	
		for(int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx < 0 || nx >= n) continue;
			if(ny < 0 || ny >= m) continue;
			if(visited[nx][ny]) continue;
			if(arr[nx][ny] == 'X') continue;
			
			visited[nx][ny] = true;
			q.push({nx, ny});
		}
	}
	
	if(count == 0) cout << "TT";
	else cout << count;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// PM 05:39
