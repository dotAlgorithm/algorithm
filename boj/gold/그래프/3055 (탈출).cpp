#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[51][51];
pair<int, int> start, endNum;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void input() {
	cin >> n >> m; 
	for(int i = 0; i<n; i++) {
		string s;
		cin >> s;
		for(int j = 0; j<m; j++) {
			if(s[j] == 'X') arr[i][j] = -2;
			else if(s[j] == '*') arr[i][j] = -1;
			else if(s[j] == '.') arr[i][j] = 0;
			else if(s[j] == 'D') {
				arr[i][j] = -3;
				endNum = {i, j};
			}
			else {
				arr[i][j] = 0;
				start = {i, j};
			}
		}
	}
}

void water() {
	vector<pair<int, int> > v;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			if(arr[i][j] == -1) {
				for(int k = 0; k<4; k++) {
					int nx = i+dx[k]; int ny = j+dy[k];
					if(nx < 0 || nx >= n) continue;
					if(ny < 0 || ny >= n) continue;
					if(arr[nx][ny] == 0) {
						v.push_back({nx, ny});
					}
				}
			}
		}
	}
	for(int i = 0; i<v.size(); i++) {
		int x = v[i].first;
		int y = v[i].second;
		arr[x][y] = -1;
	}
}

void solve() {
	queue<pair<int, int> > q;
	q.push(start);
	int cnt = 0;
	
	while(!q.empty()) {
		water();
		int x = q.front().first;
		int y = q.front().second; q.pop();
		if(x == endNum.first && y == endNum.second) continue;
	//	cout << "x = " << x << ", " << y << "\n";
		for(int i = 0; i<4; i++) {
			int nx = x+dx[i]; int ny = y+dy[i];
			if(nx < 0 || nx >= n) continue;
			if(ny < 0 || ny >= m) continue;
			if(arr[nx][ny] == 0 || arr[nx][ny] == -3) {
				arr[nx][ny] = arr[x][y]+1;
				q.push({nx, ny});
			}
		} 
		arr[x][y] = -2;
		/*
		for(int i = 0; i<n; i++) {
			for(int j = 0; j<m; j++) {
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
		cout << "\n";*/
	}
	int e = arr[endNum.first][endNum.second];
	if(e==-3) cout << "KAKTUS";
	else cout << e;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
