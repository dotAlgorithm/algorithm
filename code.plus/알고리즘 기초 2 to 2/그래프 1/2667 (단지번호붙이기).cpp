// acmicpc 2667
// authored by jihwankim
// code.plus
// 23-09-08 AM 05:41
#include <bits/stdc++.h>

using namespace std;

vector<string> arr;
bool visited[27][27];
int n;

void input() {
	cin >> n;
	string s;
	for(int i = 0; i<n; i++) {
		cin >> s;
		arr.push_back(s);
	}
}

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int bfs(int a, int b) {
	queue<pair<int, int>> q;
	q.push({a, b});
	int cnt = 0;
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second; q.pop();
		cnt++;
				
		for(int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx < 0 || nx >= n) continue;
			if(ny < 0 || ny >= n) continue;
			if(visited[nx][ny]) continue;
			if(arr[nx][ny] == '0') continue;
			
			visited[nx][ny] = true;
			q.push({nx, ny});
		}
	}
	
	return cnt;
}

void solve() {
	vector<int> cnt;
	int total_cnt = 0;
	
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			if(!visited[i][j] && arr[i][j] == '1') {
				total_cnt++;
				visited[i][j] = true;
				cnt.push_back(bfs(i, j));
			}
		}
	}
	
	sort(cnt.begin(), cnt.end());
	
	cout << total_cnt << '\n';
	for(int &x : cnt) cout << x << '\n';
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

// AM 05:51
