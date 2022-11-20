#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, x, i, t;
	
	cin >> n >> x;
	for(i=0;i<n;i++){
		cin >> t;
		if(t<x) cout << t << " ";
	}
	return 0;
}
