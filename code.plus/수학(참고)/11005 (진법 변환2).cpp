#include <bits/stdc++.h>

using namespace std;

string s; 
int b, n;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n >> b;
	while(n) {
		int ch = n%b;
		n/=b;
		if(ch > 9) ch += 7;
		s+=(ch+'0');
	} 
	reverse(s.begin(), s.end());
	cout << s;
	return 0;
}
