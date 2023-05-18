#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[100001];

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) cin >> arr[i];
}

bool valid(int money) {
	int cnt = 1; int sum = 0;
	for(int i = 0; i<n; i++) {
		if(money < arr[i]) return false;
		if(arr[i] + sum > money) {
			sum = arr[i];
			cnt++;
		}
		else {
			sum += arr[i];
		}
	}
	return cnt <= m;
}

void solve() {
	int s = 0; int e = 1e9;
	while(s <= e) {
		int mid = (s+e)/2;
		if(!valid(mid)) {
			s = mid+1;
		} else {
			e = mid-1;
		}
	}
	cout << s;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
