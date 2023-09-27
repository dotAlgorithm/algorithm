// acmicpc 6603
// authored by jihwankim
// code.plus
// 23-09-18 AM 03:49
#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> arr;

bool input() {
	cin >> n;
	if(n == 0) return false;
	arr.clear();

	for(int i = 0; i< n; i++) {
		int a;
		cin >> a;
		arr.push_back(a);
	}
	
	return true;
}

void solve() {
	vector<bool> seq(n, false);
	for(int i = 6; i<n; i++) seq[i] = true;
	
	do{
		for(int i = 0; i<n; i++) {
			if(!seq[i]) {
				cout << arr[i] << ' ';
			}
		}
		cout << '\n';
	} while(next_permutation(seq.begin(), seq.end()));
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	while(input()) {
		solve();
		cout << '\n';
	}
	return 0;
}
// AM 04 : 04
