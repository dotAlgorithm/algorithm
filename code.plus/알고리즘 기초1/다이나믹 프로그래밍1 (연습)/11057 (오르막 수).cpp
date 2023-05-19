#include <bits/stdc++.h>

using namespace std;

int arr[1001][11];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n;
	cin >> n; 
	for(int i = 1; i<=n; i++){
		int sum = 0;
		for(int j = 0; j<=9; j++){
			if(i==1){
				arr[i][j] = 1;
			}
			else if(j==0){
				arr[i][j] = arr[i-1][10];
			}
			else {
				arr[i][j] = arr[i][j-1]-arr[i-1][j-1];
			}
			sum += arr[i][j];
		}
		arr[i][10] = sum;
	}
	cout << arr[n][10];
	
	return 0;
}
