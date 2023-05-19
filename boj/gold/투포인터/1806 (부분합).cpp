#include <bits/stdc++.h>

using namespace std;

int n, s;
int arr[100001];

void input() {
	cin >> n >> s;
	for(int i = 0; i<n; i++) cin >> arr[i];
}

void solve() {
	int l = 0; int r = 0;
	int sum = arr[l];
	int len = INT_MAX;
	
	for(l; l<n; l++) {
		//cout << "l = " << l << ", r = " << r << ", s = " << sum << "\n";
		while(sum < s && ++r<n) sum += arr[r];
		if(s <= sum) len = min(len, r-l+1);
		sum -= arr[l];
	}
	
	if(len == INT_MAX) cout << "0";
	else cout << len;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
