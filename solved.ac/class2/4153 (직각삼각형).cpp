//acmicpc 4153
//authored by jihwankim
//2023 - 06 - 15 AM 02:26

#include <iostream>
#define max(a, b) (((a)>(b)) ? (a) : (b))

using namespace std;

int a, b, c;

bool input() {
	cin >> a >> b >> c;
	a = a*a;
	b = b*b;
	c = c*c;
	if(a==0 && b==0 && c==0) return false;
	return true;
}

void solve() {
	while(input()) {
		if(a+b == c || a+c == b || b+c == a) {
			cout << "right\n";
		}
		else cout << "wrong\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}

// AM 02:33
