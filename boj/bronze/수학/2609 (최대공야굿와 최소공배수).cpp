#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b, c, d;
	cin >> a >> b;
	d = a*b;
	while (b) {
		c = a%b;
		a = b;
		b = c;
	}
	cout << a << "\n" << d/a;
	
	return 0;
}
