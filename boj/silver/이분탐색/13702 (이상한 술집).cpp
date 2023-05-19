#include <bits/stdc++.h>

using namespace std;

int n, k;
int arr[10001];

void input() {
	cin >> n >> k;
	for(int i = 0; i<n; i++) {
		cin >> arr[i];
	}
}

bool vaild(long long m) {
	long long cnt = 0;
	for(int i = 0; i<n; i++) {
		cnt += arr[i]/m;
	}
	return cnt >= k;
}

void solve() {
	long long s = 0; long long e = INT_MAX;
	while(s <= e) {
		long long m = (s+e)/2;
		if(vaild(m)) {
			s = m + 1;
		}
		else {
			e = m - 1;
		}
	}
	cout << e;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
