#include <bits/stdc++.h>
using namespace std;

int floyd[101][101];
int path[101][101];
int n, m;

void back(int s, int e, vector<int> &v) {
	if(path[s][e] != 0) {
		back(s, path[s][e], v);
		v.push_back(path[s][e]);
		back(path[s][e], e, v);
	}
}

void input() {
	cin >> n >> m;
	int a, b, w;
	
	fill(floyd[0], floyd[101], INT_MAX);
	
	for(int i = 0; i<m; i++) {
		cin >> a >> b >> w;
		floyd[a][b] = min(floyd[a][b], w);
	}
	
}

void print(vector<int> &v) {
	for(int i = 0; i<v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "\n";
}

void solve() {
	for(int k = 1; k<=n; k++) {
		for(int i = 1; i <= n; i++) {
			if(i==k) continue;
			if(floyd[i][k] == INT_MAX) continue;
			for(int j = 1; j<=n; j++) {
				if(i==j) continue;
				if(floyd[k][j] == INT_MAX) continue;
				if(floyd[i][j] > floyd[i][k] + floyd[k][j]) {
					floyd[i][j] = floyd[i][k] + floyd[k][j];
					path[i][j] = k;
				}
			}
		}
	}
	
	for(int i = 1; i<=n; i++) {
		for(int j = 1; j<=n; j++) {
			if(floyd[i][j] == INT_MAX) cout << "0 ";
			else cout << floyd[i][j] << " ";
		}
		cout << "\n";
	}
	
	vector<int> paths;
	for(int i = 1; i<=n; i++) {
		for(int j = 1; j<=n; j++) {
			if(floyd[i][j] == INT_MAX) cout << "0\n";
			else {
				paths.push_back(i);
				back(i, j, paths);
				paths.push_back(j);
				
				cout << paths.size() << " ";
				print(paths);
				paths.clear();
			}
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
