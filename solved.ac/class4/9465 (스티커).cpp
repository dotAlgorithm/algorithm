#include <iostream>

using namespace std;

int dp[2][100001];

int** input(int &n) {
	cin >> n;
	int** arr = new int* [2];
	for(int i = 0; i<2; i++) {
		arr[i] = new int[n];
		for(int j = 0; j<n; j++) {
			cin >> arr[i][j];
			dp[i][j] = arr[i][j];
		}
	}
	return arr;
}

int solve() {
	int n;
	
	int** arr = input(n);
	
	for(int i = n-2; i>=0; i--) {
		dp[0][i] = max(dp[1][i+1] + arr[0][i], dp[0][i+1]);
		dp[1][i] = max(dp[0][i+1] + arr[1][i], dp[1][i+1]);
	}
	
	delete[] arr[0];
	delete[] arr[1];
	delete[] arr;
	return max(dp[0][0], dp[1][0]);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	
	while(t--) {
		cout << solve() << "\n";	
	}
	
	return 0;
}
