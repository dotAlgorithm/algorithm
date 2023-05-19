#include <bits/stdc++.h>

using namespace std;

int n, m;
int budget[10001];
int total;

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		cin >> budget[i];
		total += budget[i];	
	}
	cin >> m;
}

int maxBudget(int b) {
	int sum = 0;
	for(int i = 0; i<n; i++) {
		if(budget[i] >= b) {
			sum += b;
		} else sum += budget[i];
	}
	return sum;
}

void solve() {
	if(total <= m) {
		sort(budget, budget+n);
		cout << budget[n-1];
		return;
	}
	int s = 0; int e = 1e9;
	while(s<=e) {
		int mid = (s+e)/2;
		int sum = 0;
		int mid_Budget = maxBudget(mid);
		if(mid_Budget <= m) {
			s = mid + 1;
		} else {
			e = mid-1;
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
