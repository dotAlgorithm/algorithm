// acmicpc 1182
// authored by jihwankim
// code.plus
// 23-09-18 AM 04:07
#include <bits/stdc++.h>

using namespace std;

int n, s, cnt;
int arr[25];

void input() {
	cin >> n >> s;
	for(int i = 0; i < n; i++) cin >> arr[i];
}

void solve(int k, int sum) {
	if(k == n) {
		if(sum == s) cnt++;
		return ;
	}
	solve(k+1, sum+arr[k]);
	solve(k+1, sum);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0, 0);
	cout << (s == 0 ? cnt-1 : cnt);
	
	return 0;
}
// AM 04 : 11
