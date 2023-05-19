#include <bits/stdc++.h>

using namespace std;

int r, c;
int arr[51][51];
bool visited[51][51];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};

pair<int, int> start;

void input() {
	cin >> r >> c;
	for(int i = 0; i<r; i++) {
		string s;
		cin >> s;
		for(int j = 0; j<c; j++) {
			if(s[j] == 'D') arr[i][j] = 2;
			else if(s[j] == '.') arr[i][j] = 0;
			else if(s[j] == '*') arr[i][j] = -1;
			else if(s[j] == 'X') arr[i][j] = -2;
			else {
				start = {i, j};
				arr[i][j] = 1;
			}
		}
	}
}

void water() {
	for(int i = 0; i<r; i++) {
		for(int j = 0; j<c; j++) {
			if(arr[i][j] == -1) {
				for(int k = 0; k<4; k++) {
					int ni = i+dx[k]; int nj = j+dy[k]; 
					if(ni < 0 || ni >= r) continue;
					if(nj < 0 || nj >= c) continue;
					if(!visited[ni][nj] && arr[ni][nj] == 0) {
						visited[ni][nj] = true;
					}
				}
			}
		}
	}
}

void bfs() {
	queue<pair<int, int> > q;
	q.push(start);
	
	while(!q.empty()) {
		water();
		int x = q.front().first;
		int y = q.front().second; q.pop();
		for(int i = 0; i<4; i++) {
			int nx = x+dx[i]; int ny = y+dy[i];
			if(nx < 0 || nx >= r) continue;
			if(ny < 0 || ny >= c) continue;
			
		}
		
	} 
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);	
}
