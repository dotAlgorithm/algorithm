#include <bits/stdc++.h>

using namespace std;
int sum;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	int* a = new int[n];
	int* b = new int[n];
	for(int i = 0; i< n; i++)
		cin >> a[i];
	for(int i = 0; i< n; i++)
		cin >> b[i];
	sort(a, a+n);
	sort(b, b+n, greater<int>());
	for(int i = 0; i<k; i++){
		if(a[i] < b[i]) swap(a[i], b[i]);
		else break;
	}
	for(int i = 0; i< n; i++)
		sum += a[i];
	cout << sum;
	delete[] a;
	delete[] b;
	return 0;
}
