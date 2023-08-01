// acmicpc 11660
// 23-08-01 AM 01:19
// authored by jihwankim
// solved.ac CALSS4
#include <iostream>

using namespace std;

int n, m;
int arr[1025][1025];
int dp[1025][1025];
int x1, y1, x2, y2;

void solve() {
	int sum = 0;
	for(int i = x1; i<=x2; i++) {
		sum += dp[i][y2]-dp[i][y1-1];
	}
	cout << sum << "\n";
}

void input() {
	cin >> n >> m;
	for(int i = 1; i<=n; i++) {
		for(int j = 1; j<=n; j++) {
			cin >> arr[i][j];
			dp[i][j] = dp[i][j-1] + arr[i][j];
		}
	}
	for(int i = 0; i<m; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		solve();
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	
	return 0;
}

// AM 01:39
