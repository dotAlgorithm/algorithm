// acmicpc 6064
// code.plus
// authored by jihwankim
// 23-07-24 AM 11:00
#include <bits/stdc++.h>

using namespace std;

int t;
int m, n, x, y;

int gcd() {
	int a = m, b = n;
	while(b > 0) {
		int c = a;
		a = b;
		b = c%b;
	}
	return a;
}

void solve() {
	cin >> m >> n >> x >> y;
	if(x == m) x = 0;
	if(y == n) y = 0;
	int lcd = (m * n) / gcd();
	
	for(int start = x; start <= lcd; start+=m) {
		if(start == 0) continue;
		if(start%n == y) {
			cout << start << "\n";
			return ;
		}
	}
	cout << -1 << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> t;
	while(t--) solve();
		
	return 0;
}
// AM 11:15
