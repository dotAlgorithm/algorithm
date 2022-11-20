#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, i, s = 0;
	cin >> n;
	
	for(i=1; i<=n;i++) s+=i;
	cout << s; 
	return 0;
}
