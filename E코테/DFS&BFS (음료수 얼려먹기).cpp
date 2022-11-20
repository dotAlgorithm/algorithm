#include <bits/stdc++.h>

using namespace std;

int n, m, dfs_cnt, bfs_cnt;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
void dfs(int **arr, int x, int y) {
	//cout << arr[x][y] << " " << x << " " << y << "\n";
	
	//cout << "true or false? " << (x<0 || x>=n || y<0 || y>=m) << "\n";
	//arr[x][y] = 1;
	arr[x][y] = 1;
	for(int i = 0; i<4; i++){
		int nx = x+dx[i];
		int ny = y+dy[i];
		if(nx<0 || nx>=n || ny<0 || ny>=m ) continue;
		if(arr[nx][ny]!=1) dfs(arr, nx, ny);
	}
}

void bfs(int **arr, int x, int y) {
	int cnt = 0;
	queue<int> q;
	q.push(x);
	q.push(y);
	while(!q.empty()){
		int x = q.front(); q.pop();
		int y = q.front(); q.pop();
		arr[x][y] = 1;
		for(int i =0;i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			cnt++;
			if(cnt == 50) exit(1);
			if(nx<0 || nx>=n || ny<0 || ny>=m ) continue;
			if(arr[nx][ny]!=1) {
				q.push(nx); q.push(ny);
			}		
		}
	}
}
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	
	int **arr = new int*[n];
	for(int i = 0; i<n; i++){
		arr[i] = new int[m];
		for(int j = 0; j<m; j++) cin >> arr[i][j];
	}
	for(int i = 0; i<n; i++)
		for(int j =0; j<m; j++)
			if(arr[i][j] != 1) {
			//	dfs(arr, i, j);
			//	dfs_cnt++;
				bfs(arr, i, j);
				bfs_cnt++;
			}
	
	cout << bfs_cnt;
	for(int i =0; i<n ;i++) delete[] arr[i];
	delete[] arr;
	
	return 0;
}
