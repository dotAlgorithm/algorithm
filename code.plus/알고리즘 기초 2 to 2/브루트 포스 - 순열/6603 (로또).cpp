// acmicpc 6603
// authored by jihwankim
// 23-08-01 PM 10:13
// code.plus
#include <bits/stdc++.h>

using namespace std;

int n;
int arr[14];
int path[14];
bool input() {
	cin >> n;
	if(n == 0) return false;
	for(int i = 1; i<=n; i++) {
		cin >> arr[i];
	}
	return true;
}

void solve(int k) {
	if(k == 7) {
		for(int i = 1; i<k; i++) {
			cout << arr[path[i]] << " ";
		}
		cout << "\n";
	}
	for(int i = path[k-1]+1; i<=n; i++) {
		path[k] = i;
		solve(k+1);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	while(input()) {
		solve(1);
		cout << "\n";	
	}
	
	return 0;
} 
// PM 10:23
