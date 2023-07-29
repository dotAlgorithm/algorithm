// acmicpc 15650
// authored by jihwankim
// code.plus
// 23-07-26 AM 05:19
#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[9];
bool chk[9];

void solve(int k) {
	if(k == m) {
		for(int i = 0; i<k; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return ;
	}
	for(int i = 1; i<=n; i++) {
		if(!chk[i]) {
			arr[k] = i;
			chk[i] = true;
			solve(k+1);
			for(int j = i+1; j<=n; j++) chk[j] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n >> m;
	solve(0);
	
	return 0;
}
// AM 05:27
