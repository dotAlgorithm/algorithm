// acmicpc 19646
// authored by jihwankim
// code.plus
// 23-10-11 PM 01:11
#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<string> arr;
int group[1005][1005];
int groups_count[1000005];
bool visited[1005][1005];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void input() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		arr.push_back(s);
	}
}

int bfs(int a, int b, int group_cnt) {
	queue<pair<int, int>> q;
	q.push({a, b});
	visited[a][b] = true;
	int cnt = 0;
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		group[x][y] = group_cnt;
		q.pop();
		cnt++;
		
		for(int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx < 0 || nx >= n) continue;
			if(ny < 0 || ny >= m) continue;
			if(arr[nx][ny] == '1') continue;
			if(visited[nx][ny]) continue;
			
			visited[nx][ny] = true;
			q.push({nx, ny});
		}
	}
	
	return cnt;
}

void solve() {
	int group_count = 1;
	int count = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < arr[i].size(); j++) {
			if(arr[i][j] == '0' && !visited[i][j]) {
				count = bfs(i, j, group_count);
				groups_count[group_count++] = count;
			}
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < arr[i].size(); j++) {
			int cnt = 0;
			if(arr[i][j] == '1') {
				int chk[4];
				for(int k = 0; k < 4; k++) {
					int nx = i + dx[k];
					int ny = j + dy[k];
					chk[k] = -1;
					if(nx < 0 || nx >= n) continue;
					if(nx < 0 || ny >= m) continue;
					bool groups_visited = false;
					for(int z = 0; z < k; z++) {
						if(group[nx][ny] == chk[z]) {
							groups_visited = true;
							break;
						}
					}
					if(groups_visited) continue;
					chk[k] = group[nx][ny];
					cnt += groups_count[group[nx][ny]];
				}
				cnt++;
			}
			cout << cnt % 10;
		}
		cout << '\n';
	}
	
	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// PM 02:20
