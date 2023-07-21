#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, i, max_n=0, max_idx;
	for (i = 0;i<9;i++){
		cin >> n;
		if(max_n < n){
			max_n = n;
			max_idx = i+1;
		}
	}
	cout << max_n << "\n" << max_idx; 
	
	return 0;
}
