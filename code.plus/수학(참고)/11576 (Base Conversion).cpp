#include <bits/stdc++.h>

using namespace std;

int a, b, m;
int arr[26];

void print(int n) {
	if(n==0) return;
	print(n/b);
	cout << n%b << " ";
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> a >> b >> m;
	for(int i=1;i<=m;i++) cin >> arr[i];
	int ten = 0;
	for(int i = m; i>=1; i--) ten += arr[i]*pow(a, (m-i));
	print(ten);
	
	return 0;
}
