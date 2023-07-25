// acmicpc 1436
// authored by jihwankim
// solved.ac Class2
// 23-07-26 AM 05:58

#include <bits/stdc++.h>

using namespace std;

int n;

void solve() {
	// 5666 -> 6660
	// 6666 -> 6667
	// 6669 -> 6670 false, 16669 or 66670
	// 56669 -> 66600
	int num = 666;
	int cnt = 1;
	while(cnt != n) {
		num++;
		int temp = num;
		while(temp && temp%1000 != 666) temp/=10;
		if(temp % 1000 == 666) cnt++;
	} 	
	cout << num;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n;
	solve();
	
	return 0;
}

// AM 06:44
