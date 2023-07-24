// acmicpc 14500
// code.plus
// authored by jihwankim
// 23-07-24 AM 10:30
#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[505][505];
vector<vector<pair<int, int>>> tet(5);

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cin >> arr[i][j];
		}
	}
	tet[0] = {{0,0}, {0,1}, {0,2}, {0,3}};
	tet[1] = {{0,0}, {1,0}, {0,1}, {1,1}};
	tet[2] = {{0,0}, {1,0}, {2,0}, {2,1}};
	tet[3] = {{0,0}, {1,0}, {1,1}, {2,1}};
	tet[4] = {{0,0}, {0,1}, {1,1}, {0,2}};
}

void solve() {
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			for()
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

