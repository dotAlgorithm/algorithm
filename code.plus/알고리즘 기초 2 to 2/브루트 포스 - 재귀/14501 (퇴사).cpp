// acmicpc 14501
// authored by jihwankim
// 23-08-02 AM 01:22 
// code.plus
#include <bits/stdc++.h>

using namespace std;

int n;
int maxPay;
int t[16];
int p[16];

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		cin >> t[i] >> p[i];
	}
} 

void solve(int day, int pay) {
	if(day > n) return;
	
	for(int i = day; i<n; i++) {
		int next = day+t[i];
		if(next <= n) {
			maxPay = max(maxPay, pay);
			solve(next, pay+p[i]);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0, 0);
	cout << maxPay;
	
	return 0;
} 
// PM 11:19
