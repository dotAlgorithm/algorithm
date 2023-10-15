// acmicpc 16933
// authored by jihwankim
// code.plus
// 23-10-14 AM 03:33
#include <bits/stdc++.h>
#define MORNING 0
#define NIGHT 1

using namespace std;

struct cur{
	int x, y, cnt;
	bool night;
};

int n, m, k;
vector<string> arr;
int dist[1005][1005][15][2];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void input() {
	cin >> n >> m >> k;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		arr.push_back(s);
	}
}

bool valid(int &x, int &y) {
	if(x < 0 || x >= n) return false;
	if(y < 0 || y >= m) return false;
	return true;
}

/*	체크할 점. 
	1. 벽을 부술 경우, 안 부술 경우.
	2. 낮과 밤 
	3. 벽은 낮에만 바꿀 수 있음. 
	-> 밤일 경우, 낮에 벽을 바꾸는게 더 짧은 경로일 수 있음.
	-> 밤일 경우만 낮으로 바꾸어 제자리에 머물러봄 거리 += 1. 
	낮 밤을 배열로 표현할 시 최악 총 2200만 * 4byte 공간을 사용. 약 83MB 
*/
int solve() {
	queue<cur> q;
	q.push({0, 0, 0, false});
	dist[0][0][0][0] = 1;
	
	while(!q.empty()) {
		cur now = q.front(); q.pop();
		if(now.cnt > k) continue;
			
		for(int i = 0; i < 4; i++) {
			int nx = now.x + dx[i];
			int ny = now.y + dy[i];
			
			if(!valid(nx, ny)) continue;
			
			if(arr[nx][ny] == '1') { 
				if(now.night == NIGHT) {
					if(dist[now.x][now.y][now.cnt][MORNING]) continue;
					// 벽을 없애는 경로가 더 빠를 수 있으므로 낮까지 기다림. 
					dist[now.x][now.y][now.cnt][MORNING]
					= dist[now.x][now.y][now.cnt][NIGHT] + 1;
					q.push({now.x, now.y, now.cnt, MORNING});
				}
				else {
					if(dist[nx][ny][now.cnt+1][NIGHT]) continue;
					// 낮이면 벽을 부수고 다음칸으로 이동하면서 밤이 됨 
					dist[nx][ny][now.cnt+1][NIGHT]
					= dist[now.x][now.y][now.cnt][MORNING] + 1;
					q.push({nx, ny, now.cnt+1, NIGHT});
				} 
			} 
			else {
				// 벽이 없는 경우 낮밤만 바꾸면서 이동하면 됨.
				if(now.night == NIGHT) {
					if(dist[nx][ny][now.cnt][MORNING]) continue;
					dist[nx][ny][now.cnt][MORNING]
					= dist[now.x][now.y][now.cnt][NIGHT] + 1;
					q.push({nx, ny, now.cnt, MORNING}); 
				} 
				else {
					if(dist[nx][ny][now.cnt][NIGHT]) continue;
					dist[nx][ny][now.cnt][NIGHT]
					= dist[now.x][now.y][now.cnt][MORNING] + 1;
					q.push({nx, ny, now.cnt, NIGHT});
				}
			}
		}
	}
	/*
	for(int a = 0; a<=k;a++) {
		cout << "벽 " << a << "개 부숨\n";
		for(int b = 0; b<2; b++) {
			if(b == 0) cout << "this is morning\n";
			else cout << "this is night\n";
			for(int c = 0; c<n;c++){
				for(int d = 0; d<m; d++) {
					cout << dist[c][d][a][b] << ' ';
				}
				cout << '\n';
			}
			cout << '\n';
		}
		cout << '\n';
	}
	*/
	
	int min_dist = INT_MAX;
	for(int i = 0; i<=k; i++) {
		for(int j = 0; j < 2; j++) {
			if(dist[n-1][m-1][i][j] == 0) continue; 
			min_dist = min(min_dist, dist[n-1][m-1][i][j]);
		}
	}
	
	if(min_dist == INT_MAX) return -1;
	return min_dist;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	cout << solve();
	
	return 0;
}
// AM 04 : 19
