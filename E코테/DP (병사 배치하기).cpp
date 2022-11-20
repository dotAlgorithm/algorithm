#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> v;
	

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n;
	int *arr = new int[n];
	for(int i =0; i<n ;i++){
		cin >> arr[i];
	}	
	reverse(arr, arr+n); // begin(arr), end(arr)
	
	vector<int> dp(2000, 1);
	for(int i = 1; i < n;i++){
		for(int j = 0; j<i; j++){
			if(arr[j] < arr[i]) dp[i] = max(dp[i], dp[j]+1);
		}
	}
	int m=0;
	for(int i =0; i<n ;i++) m = max(m, dp[i]);
	cout << n-m;
	delete[] arr;
	return 0;
}
