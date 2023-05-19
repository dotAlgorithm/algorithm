#include <bits/stdc++.h>

using namespace std;
int n;
int arr[501][501];
long long dp[501][501];

void input() {
	cin >> n;
	int i = n;
	while(i--) {
		for(int j = i; j<n; j++){
			cin >> arr[i][j];
		}
	}
}
int solve() {
	long long maxNum = 0;
	int i = n-1;
	while(i--) {
		for(int j = i; j<n; j++){
			arr[i][j] += max(arr[i+1][j+1], arr[i+1][j]);
			
			if(i==0) {
				maxNum = max(maxNum, arr[i][j]);
			}
		}
	}
	return maxNum;
}/*
void solve() {
	
	
} */

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	printf("%lld", solve());
	
	return 0;
}
