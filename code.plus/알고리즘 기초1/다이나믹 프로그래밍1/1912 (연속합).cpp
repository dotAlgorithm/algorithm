#include <bits/stdc++.h>

using namespace std;

int arr[100001];
int d[100001];
int m = -1001;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n;
	cin >> n;
	for(int i = 1; i<=n; i++) {
		cin >> arr[i];
		d[i] = max(arr[i], d[i-1]+arr[i]);
		m = max(m, d[i]);
	}
	cout << m;
	return 0;
}
