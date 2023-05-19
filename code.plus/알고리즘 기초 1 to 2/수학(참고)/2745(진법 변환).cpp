#include <bits/stdc++.h>

using namespace std;

string s; 
int b, sum;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> s >> b;
	int size = s.size();
	for(int i = s.size()-1; i>=0; i--) {
		int ch = s[i]-'0';
		if(ch > 9) ch-=7;
		sum += ch*pow(b, size-1-i);
	}
	cout << sum;
	return 0;
}
