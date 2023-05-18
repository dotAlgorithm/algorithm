#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	while(n--){
		int a, b, c, d;
		cin >> a >> b;
		d = a*b;
		while (b) {
			c = a%b;
			a = b;
			b = c;
		}
		cout << d/a << "\n";
	} 
	
	return 0;
}
