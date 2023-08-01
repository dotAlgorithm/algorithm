// acmicpc 10973
// authored by jihwankim
// 23-08-01 PM 03:53
// code.plus
#include <bits/stdc++.h>

using namespace std;

int n;
int arr[10001];

void input() {
	cin >> n;
	for(int i = 0 ; i<n; i++) {
		cin >> arr[i];
	}
}

void solve() {
	int i, j;
	for(i = n-2; arr[i] < arr[i+1]; i--);
	if(i<0) {
		cout << -1; return ;
	}
	sort(arr+i+1, arr+n);
	for(j = n-1; arr[i] < arr[j]; j--);
	swap(arr[i], arr[j]);
	sort(arr+i+1, arr+n, greater<int>());
	
	for(int i = 0; i<n; i++) cout << arr[i] << " ";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(); 
	
	return 0;
}
// PM 04:20
