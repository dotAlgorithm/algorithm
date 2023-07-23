#include <bits/stdc++.h>

using namespace std;

int n;
int arr[300005];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n;
	for(int i = 0 ; i<n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);
	
	int sum = 0;
	int cut = round(0.15 * n);
	
	for(int i = cut; i<n-cut; i++) {
		sum += arr[i];
	}
	
	if(n == 0) cout << 0;
	else cout << round((float)sum / (n-cut*2));
	
	return 0;
}
