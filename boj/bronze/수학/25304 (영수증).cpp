#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int x, n, a, b, i;
	cin >> x;
	cin >> n;
	
	for(i=0; i<n; i++) {
		cin >> a >> b;
		x -= a*b;
	}
	cout << (x==0?"Yes":"No");
	return 0;
}
