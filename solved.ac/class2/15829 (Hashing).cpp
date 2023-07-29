//acmicpc 15829
//authored by jihwankim
//2023 - 06 - 15 AM 02:42

#include <iostream>
#include <string>

using namespace std;

int l;
string s;

void input() {
	cin >> l >> s;
}

void solve() {
	long long hash = 0;
	long long e = 1;
	
	for(int i = 0; i<l; i++) {
		long long c = s[i]-'a'+1;
		
		c *= e;
		c %= 1234567891;
		
		hash += c;
		hash %= 1234567891;
		
		e *= 31;
		e %= 1234567891;
	}
	
	cout << hash;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

// AM 02:40
