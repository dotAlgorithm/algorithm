#include <iostream>
#include <algorithm>

using namespace std;

int n;
pair<int, int> arr[5002];

bool comp(pair<int, int> p1, pair<int, int> p2) {
	if(p1.second==p2.second) {
		return p1.first < p2.first;
	}
	return p1.second<p2.second;
}
void input() {
	cin >> n;
	for(int i=1 ;i<=n; i++) {
		int x, y;
		cin >> x >> y;
		arr[i] = {x,y};
	}
	sort(arr+1, arr+n+1, comp);
}

bool valid(int y1, int y2) {
	if(y1 != y2) return false;
	return true;
}
void solve() {
	int sum = 0;
	for(int i = 1; i<=n; i++) {
		int x1 = arr[i].first, y1 = arr[i].second;
		int x2 = arr[i-1].first, y2 = arr[i-1].second;
		int x3 = arr[i+1].first, y3 = arr[i+1].second;
		int diff = 1e10;
		if(valid(y1, y2)) {
			diff = min(diff, abs(x1-x2));
		}
		if(valid(y1,y3)){
			diff = min(diff, abs(x1-x3));
		}
		sum += diff;
	}
	cout << sum;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	return 0;
}
