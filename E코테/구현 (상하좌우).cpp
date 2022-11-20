#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x = 1, y = 1;
	char c;
	cin >> n;
	while(true) {
		cin >> c;
		if (cin.eof()) break;
		if(c == 'U' && y > 1) {
			y-=1;
			continue;	
		}
		if(c == 'D' && y < n) {
			y+=1;
			continue;	
		}
		if(c == 'L' && x > 1) {
			x-=1;
			continue;
		}
		if(c == 'R' && x < n) {
			x+=1;
			continue;	
		}
	}
	cout << y << " " << x;
	
	return 0;
}
