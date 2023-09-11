// acmicpc 2178
// authored by jihwankim
// code.plus
// 23-09-10 AM 03:49
#include <bits/stdc++.h>

using namespace std;

int n, m;
bool arr[105][105];

void input() {
	cin >> n >> m;
	string s;
	for(int i = 0; i < n; i++) {
		cin >> s;
		for(int j = 0; j < m; j++) {
			arr[i][j] = (s[j]-'0');
		}
	}
}

struct q_data{
	int x;
	int y;
	int cnt;
};

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void solve() {
	queue<q_data> q;
	q.push(q_data{0, 0, 1});
	arr[0][0] = false;
	
	while(!q.empty()) {
		int x = q.front().x;
		int y = q.front().y;
		int cnt = q.front().cnt; 
		q.pop();
		
		for(int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx == n-1 && ny == m-1) {
				cout << cnt+1;
				return ;
			}
			
			if(nx < 0 || nx >= n) continue;
			if(ny < 0 || ny >= m) continue;
			if(!arr[nx][ny]) continue;
			
			arr[nx][ny] = false;
			q.push(q_data{nx, ny, cnt+1});
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// AM 03:59
