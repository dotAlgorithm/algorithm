// acmicpc 9375
// authored by jihwankim
// 23-08-05 PM 10:07
// solved.ac class3
#include <bits/stdc++.h>

using namespace std;

int n;
unordered_map<string, int> m;

void input() {
	m.clear();
	cin >> n;
	string type;
	for(int i = 0; i<n; i++) {
		cin >> type >> type;
		if(m.find(type) != m.end()) m[type]++;
		else m[type] = 1;
	}
}

void solve() {
	int cnt = 1;
	for(auto &a : m) {
		cnt *= (a.second+1);
	}
	cout << cnt-1 << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		input();	
		solve();
	}
	
	return 0;
}
// PM 10:29
