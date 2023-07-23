#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[100001];
int b[100001];

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}	
	cin >> m;
	for(int i = 0; i<m; i++) {
		cin >> b[i];
	}
	sort(a, a+n);
}

void lower_bounds(int s, int e, int key) {
	while(s<=e) {
		int mid = (s+e)/2;
		if(a[mid] >= key) {
			e = mid-1;
		}else {
			s = mid+1;
		}
	}
	if(s>=n) cout << "0\n";
	else cout << (key == a[s]) << "\n";
}
void solve() {
	for(int i = 0; i<m; i++) {
		lower_bounds(0, n-1, b[i]);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
