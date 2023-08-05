// acmicpc 15656
// authored by jihwankim
// 23-07-27 AM 08:22
// code.plus
#include <bits/stdc++.h>

using namespace std;

int arr[10001];
int save[10001];
int n, m;

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);
}

void solve(int k) {
	if(k == m) {
		for(int i = 0; i<k; i++) {
			cout << save[i] << " ";
		}
		cout << "\n";
		return;
	}
	for(int i = 0; i<n; i++) {
		save[k] = arr[i];
		solve(k+1);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0);
	
	return 0;
}

// AM 08:23
