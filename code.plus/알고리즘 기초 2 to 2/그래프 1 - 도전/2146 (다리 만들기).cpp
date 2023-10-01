// acmicpc 2146
// authored by jihwankim
// code.plus
// 23-09-10 AM 04:44
#include <bits/stdc++.h>

using namespace std;

int n;
int arr[105][105];
vector<pair<int, int>> paths;

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cin >> arr[i][j];
		}
	}
}

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void bfs(int a, int b) {
	queue<pair<int, int>> q;
	q.push({a, b});
	arr[a][b] = -1;
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second; q.pop();
		
		bool chk = false;
		for(int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx < 0 || nx >= n) continue;
			if(ny < 0 || ny >= n) continue;
			if(arr[nx][ny] <= 0) {
				if(arr[nx][ny] == 0) chk = true;
				continue;
			}
			
			arr[nx][ny] = -1;
			q.push({nx, ny});
		}
		
		if(chk) paths.push_back({x, y});
	}
}

int find_shortest_path() {
	int dis = INT_MAX;
	//cout << "\n";
	for(auto& p : paths) {
		//cout << p.first << ", " << p.second << "\n";
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(arr[i][j] == 1) {
					int dis2 = abs(p.first-i) + abs(p.second-j) - 1;
					dis = min(dis, dis2);
				}
			}
		}
	}
	return dis;
}

void print() {
	for(int i = 1; i<n*2; i++) cout << "=";
	cout << "\n";
	for(auto &x : paths) {
		cout << x.first << ", " << x.second << "\n";
	}
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}
}

void solve() {
	int dis = INT_MAX;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			if(arr[i][j] == 1) {
				bfs(i, j);
				//print();
				dis = min(dis, find_shortest_path());
				paths.clear();
			}
		}
	}
	cout << dis;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// AM 05:13
