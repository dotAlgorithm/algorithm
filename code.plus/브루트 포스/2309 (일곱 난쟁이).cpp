#include <bits/stdc++.h>

using namespace std;

int arr[9];
vector<int> asc;
int sum;

int solve(int k) {
	if(k==9) return 0;
	for(int i = k; i<9; i++){
		sum += arr[i];
		if(solve(i+1)==1 || (sum==100&&k>=6)) {
			asc.push_back(arr[i]);
			return 1;
		}
		sum -= arr[i];
	}	
	return 0;	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	for(int i = 0; i<9;i++){
		cin >> arr[i];
	}	
	
	solve(0);
	sort(asc.begin(), asc.end());
	for(int i = 0; i<asc.size(); i++) {
		cout << asc[i] << "\n";
	}
	return 0;
}
