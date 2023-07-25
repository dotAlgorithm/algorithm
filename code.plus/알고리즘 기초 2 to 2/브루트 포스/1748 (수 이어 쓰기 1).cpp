// acmicpc 1748
// authored by jihwankim
// 23-07-26 AM 04:30
// code.plus
 
#include <bits/stdc++.h>

using namespace std;

int n;

void solve() {
	int size = 0;
	int max_num = 99999999;
	while(n) {
		if(n - max_num <= 0) max_num /= 10;
		else {
			size += (n-max_num) * (int)to_string(n).size();
			n = max_num;
		}
	}
	cout << size; 
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n;
	solve();
	
	return 0;
}

// AM 04:49
