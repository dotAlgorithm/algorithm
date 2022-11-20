#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b, c;
	cin >> a >> b;
	while (b) {
		c = a%b;
		a = b;
		b = c;
	}
	for(int i = 0; i<a; i++) cout << 1;
	
	return 0;
}
