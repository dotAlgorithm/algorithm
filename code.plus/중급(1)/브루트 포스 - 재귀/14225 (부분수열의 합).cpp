// acmicpc 14225
// authored by jihwankim
// code.plus
// 23-09-19 PM 03:21
#include <bits/stdc++.h>

using namespace std;

int n;
int arr[25];
bool chk[2000001];

void input() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void rec(int k, int sum) {
	if(k == n) {
		chk[sum] = true;
		return ;
	}
	rec(k+1, sum+arr[k]);
	rec(k+1, sum);
}

void solve() {
	rec(0, 0);
	for(int i = 1; i<=2000000; i++) {
		if(!chk[i]) {
			cout << i;
			break;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// PM 03:29
