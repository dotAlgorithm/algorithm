#include <bits/stdc++.h>

using namespace std;

int n = 5;
int m = 5;
int arr[] = {10, 20, 30, 40, 50};
int *prefixSum = new int[n+1]; 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	prefixSum[0] = 0;
	
	for(int i = 0; i< n ;i++){
		prefixSum[i+1] = prefixSum[i] + arr[i];
	}
	int left = 3;
	int right = 4;
	cout << prefixSum[right] - prefixSum[left-1] << "\n";
	
	delete[] prefixSum;
	return 0;
}
