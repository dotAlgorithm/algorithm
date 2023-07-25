// acmicpc 15651
// authored by jihwankim
// code.plus
// 23-07-26 AM 05:34

#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[7];

void solve(int k) {
	if(k == m) {
		for(int i = 0; i<k; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return ;
	}
	
	for(int i = 1; i<=n; i++) {
		arr[k] = i;
		solve(k+1);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n >> m;
	solve(0);
	
	return 0;
}
// AM 05:37
