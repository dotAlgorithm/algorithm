#include <bits/stdc++.h>

using namespace std;
int n, k;

int big(int a, int b){
	return a > b;
}
int main () {
	scanf("%d %d", &n, &k);
	int *arr = new int[n];
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n, big);
	cout << arr[k-1] << "\n";
	delete[] arr;
	
    return 0;
}
