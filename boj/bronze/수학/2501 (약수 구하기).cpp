//acmicpc 2501
//authored by jihwankim
//23-07-05 AM 02:59

#include <bits/stdc++.h>

using namespace std;

int n, k;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n >> k; 
	vector<int> yak;
	for(int i = 1; i*i<=n; i++) {
		if(n%i == 0) yak.push_back(i); 
	}
	for(int i = yak.size()-1; i>=0; i--) {
		int j = yak[i];
		if(j*j == n) continue;
		yak.push_back(n/yak[i]);
	}
	if(k > yak.size()) cout << 0;
	else cout << yak[k-1];
	
	return 0;
}
//AM 03:06
