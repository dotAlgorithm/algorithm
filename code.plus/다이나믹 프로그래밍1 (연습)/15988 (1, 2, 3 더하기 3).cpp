#include <bits/stdc++.h>

int d[1000001]={0,1,2,4};
int m = 1000000009;
using namespace std;
int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin >> t;
	for(int i = 4; i<=1000000;i++) {
		d[i]=((d[i-3]+d[i-2])%m + d[i-1])%m;
	}
	while(t--) {
		int n;
		cin >> n;
		cout << d[n] << "\n";
	}
	return 0;
}

