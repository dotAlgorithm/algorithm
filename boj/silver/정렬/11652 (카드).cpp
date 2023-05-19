#include <bits/stdc++.h>
#define ll long long

int n;
ll num;
ll arr[100001];

using namespace std;

void input() {
	cin >> n;
	for(int i = 0; i< n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);
}

bool comp(pair<ll, int> p1, pair<ll, int> p2) {
	if(p1.second == p2.second) {
		return p1.first < p2.first;
	}
	return p1.second > p2.second;
}
void solve() {
	vector<pair<ll, int> > v;
	ll now = arr[0];
	int cnt = 0;
	
	for(int i =0 ;i<=n; i++) {
		if(now != arr[i] || i == n) {
			v.push_back({now, cnt});
			now = arr[i];
			cnt = 0;
		}
		cnt++;
	}
	
	sort(v.begin(), v.end(), comp);
	cout << v[0].first;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	return 0;
}
