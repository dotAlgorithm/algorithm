#include <bits/stdc++.h>

using namespace std;

int arr[1000001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n;
	cin >> n;
	for(int i = 2; i<=n; i++) {
		arr[i] = 1000001;
		if(!(i%2)) arr[i] = arr[i/2]+1;
		if(!(i%3)) arr[i] = min(arr[i/3]+1, arr[i]);
		arr[i] = min(arr[i], arr[i-1]+1);
	}
	cout << arr[n];	
	return 0;
}
