#include <bits/stdc++.h>

int arr[1001];
using namespace std;
int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	arr[1] = 1;
	arr[2] = 2;
	int n;
	cin >> n;
	for(int i = 3; i<=n; i++) {
		arr[i]	= arr[i-1] + arr[i-2];
		arr[i] %= 10007; 
	}
	cout << arr[n];
	return 0;
}

