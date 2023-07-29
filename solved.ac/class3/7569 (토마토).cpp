#include <bits/stdc++.h>

using namespace std;

int n, m, h;
int arr[101][101][101];
bool visited[101][101][101];
int dx[] = {1, -1, 0, 0, 0, 0};
int dy[] = {0, 0, -1, 1, 0, 0};
int dz[] = {0, 0, 0, 0, -1, 1};

typedef struct Tomato{
	int x;
	int y;
	int z;
};

queue<Tomato> q;
 
void input() {
	cin >> m >> n >> h;
	for(int i = 0; i<h; i++) {
		for(int j = 0; j<n; j++) {
			for(int k = 0; k<m; k++) {
				cin >> arr[i][j][k];
				if(arr[i][j][k] == 1) {
					Tomato t = {j, k, i};
					visited[i][j][k] = true;
					q.push(t);
				}
			}
		}
	}	
}

void bfs() {
	while(!q.empty()) {
		Tomato t = q.front(); q.pop();
		int x = t.x; int y = t.y; int z = t.z;
		for(int i = 0; i<6; i++) {
			int nx = x+dx[i]; 
			int ny = y+dy[i];
			int nz = z+dz[i];
			if(nx<0 || nx>=n) continue;
			if(ny<0 || ny>=m) continue;
			if(nz<0 || nz>=h) continue;
			if(arr[nz][nx][ny] == -1) continue;
			if(visited[nz][nx][ny]) continue;
			visited[nz][nx][ny] = true;
			q.push({nx, ny, nz});
			arr[nz][nx][ny] = arr[z][x][y]+1;
		}		
	} 
}

int solve() {
	bfs();
	int maxDay = 0;
	
	/* Debugging
	cout << "\ntomato print\n";
	for(int i = 0; i<h; i++) {
		for(int j = 0; j<n; j++) {
			for(int k = 0; k<m; k++) {
				cout << arr[i][j][k] << " ";
			}
			cout << "\n";
		}
		cout << "\n";
	}	
	*/
	
	for(int i = 0; i<h; i++) {
		for(int j = 0; j<n; j++) {
			for(int k = 0; k<m; k++) {
				if(arr[i][j][k] == 0) {
					return -1;
				}
				maxDay = max(maxDay,arr[i][j][k]);
			}
		}
	}	
	
	
	return maxDay-1;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	cout << solve();
	
	return 0;
}
