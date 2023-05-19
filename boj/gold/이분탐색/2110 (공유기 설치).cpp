#include <bits/stdc++.h>

using namespace std;
int n, c;
vector<int> houses;

void input() {
	cin >> n >> c;
	for(int i = 0; i<n; i++) {
		int house;
		cin >> house;
		houses.push_back(house);
	}
	sort(houses.begin(), houses.end());
}

bool diff_bound(int d) {
	int cnt = 1;
	int last = houses[0];
	for(int i = 1; i<houses.size(); i++) {
		if(houses[i] - last >= d) {
			cnt++;
			last = houses[i];
		}
	}
	//cout << d << " - " << cnt << "\n";
	return cnt >= c;
}

void solve() {
	int s = 0;
	int e = 1e9;
	while(s<=e) {
		int m = (s+e)/2;
		if(!diff_bound(m)) e = m-1;
		else s = m+1;	
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
