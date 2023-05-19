#include <bits/stdc++.h>

using namespace std;

int n, k;
int b[100001];

void input() {
	cin >> n >> k;
}

bool valid(int key) {
	int cnt = 0;
	for(int i = 1; i<=n; i++) {
		cnt += min(key/i, n);
	}
	return cnt >= k;
}

void solve() {
	int s = 0; int e = 1e9;
	while(s<=e) {
		int mid = (s+e)/2;
		if(valid(mid)) {
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	cout << s;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

/*
N = 3 
A               B
[1][2][3]      [1][2][2][3][3][4][6][6][9]
[2][4][6]  -> 
[3][6][9]
*/
