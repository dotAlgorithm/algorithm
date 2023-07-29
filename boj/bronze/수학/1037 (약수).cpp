//acmicpc 1037
//authored by jihwankim
//23-07-05 AM 02:56

#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n;
	int maxY = 0;
	int minY = 1e6;
	for(int i = 0; i<n; i++) {
		int num;
		cin >> num;
		maxY = max(maxY, num);
		minY = min(minY, num);
	}
	
	cout << maxY * minY;
	
	return 0;
}
