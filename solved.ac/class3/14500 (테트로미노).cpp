// acmicpc 14500
// authored by jihwankim
// 23-08-05 PM 11:24
// solved.ac class3
#include <bits/stdc++.h>
#define y first
#define x second

using namespace std;

int n, m;
int arr[505][505];
pair<int, int> tet[19][4] = {
	{{0, 0}, {0, 1}, {0, 2}, {0, 3}}, // mint
	{{0, 0}, {1, 0}, {2, 0}, {3, 0}}, 
	{{0, 0}, {0, 1}, {1, 0}, {1, 1}}, // yellow
	{{0, 0}, {1, 0}, {2, 0}, {2, 1}}, // orange
	{{0, 0}, {1, 0}, {0, 1}, {0, 2}},
	{{0, 0}, {0, 1}, {1, 1}, {2, 1}},
	{{0, 2}, {1, 0}, {1, 1}, {1, 2}}, 
	{{0, 1}, {1, 1}, {2, 1}, {2, 0}}, // reverse orange
	{{0, 0}, {1, 0}, {1, 1}, {1, 2}},
	{{0, 0}, {0, 1}, {1, 0}, {2, 0}},
	{{0, 0}, {0, 1}, {0, 2}, {1, 2}},      
	{{0, 0}, {1, 0}, {1, 1}, {2, 1}}, // green
	{{1, 0}, {1, 1}, {0, 1}, {0, 2}},
	{{0, 1}, {1, 1}, {1, 0}, {2, 0}}, // reverse green
	{{0, 0}, {0, 1}, {1, 1}, {1, 2}},  
	{{0, 0}, {0, 1}, {1, 1}, {0, 2}}, // pink
	{{0, 1}, {1, 0}, {1, 1}, {2, 1}}, 
	{{1, 0}, {0, 1}, {1, 1}, {1, 2}}, 
	{{0, 0}, {1, 0}, {1, 1}, {2, 0}} 
};

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cin >> arr[i][j];
		}
	}
}

int valid(int i, int j, int k) {
	int sum = 0;
	for(int z = 0; z < 4; z++) {
		int ni = tet[k][z].y + i;
		int nj = tet[k][z].x + j;
		if(ni > n) return 0;
		if(nj > m) return 0;
		sum += arr[ni][nj];
	}
	return sum;
}

void solve() {
	int maxSum = 0;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			for(int k = 0; k<19; k++) {
				maxSum = max(maxSum, valid(i, j, k));
			}
		}
	}
	cout << maxSum;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// PM 11:54
