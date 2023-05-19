#include <bits/stdc++.h>

using namespace std;

int arr[201][201];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	for(int i = 0; i<=k; i++){
		arr[i][0] = 1;
		if(i==0) continue;
		for(int j=1; j<=n; j++){
			arr[i][j] = (arr[i-1][j] + arr[i][j-1])%1000000000;
		}
	}	
	cout << arr[k][n]%1000000000;
	
	return 0;
}
