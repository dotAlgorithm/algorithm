#include <bits/stdc++.h>

using namespace std;

int d[100001];
int n;
void init() {
	for(int i = 1; i<=n; i++) {
		d[i] = i;
		for(int j = 1; (j*j)<=i; j++){
			d[i] = min(d[i], d[i-(j*j)]+1);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cin >> n;
	init();
	cout << d[n];
	return 0;
}
