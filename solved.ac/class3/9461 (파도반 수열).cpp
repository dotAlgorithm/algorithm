// acmicpc 9461
// authored by jihwankim
// solved.ac Class3
// 23-08-05 PM 10:42
#include <bits/stdc++.h>

using namespace std;
long long seq[101];

void init() {
	seq[1] = seq[2] = seq[3] = 1;
	seq[4] = 2; seq[5] = 2;
	for(int i = 6; i<=100; i++) {
		seq[i] = seq[i-1] + seq[i-5];
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin >> t;
	init();
	while(t--) {
		int n;
		cin >> n;
		cout << seq[n] << "\n";
	}
	return 0;
}
// PM 10:51
