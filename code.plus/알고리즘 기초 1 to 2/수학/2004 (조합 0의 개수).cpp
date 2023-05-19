#include <bits/stdc++.h>

using namespace std;

long long a, b;

void solve(int v, char c){ 
	for(long long i =5; i<=v; i*=5) 
		a = c=='+' ? a+(v/i):a-(v/i);
	for(long long i =2; i<=v; i*=2) 
		b = c=='+' ? b+(v/i):b-(v/i);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	long long n, r;
	cin >> n >> r;
	solve(n,'+');
	solve(r,'-');
	solve(n-r,'-');
	cout << min(a, b);
	return 0;
}
