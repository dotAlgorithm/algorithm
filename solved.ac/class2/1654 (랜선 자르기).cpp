#include <bits/stdc++.h>

using namespace std;

int k, n;
int lan[10001];

void input() {
	cin >> k >> n;
	for(int i = 0; i<k; i++) cin >> lan[i];
}

bool valid(long long l) {
	long long sum = 0;
	for(int i = 0; i<k; i++) {
		sum += (lan[i]/l);
	}
	return sum >= n;
}
void solve() {
	long long s = 0; long long e = INT_MAX;
	int v;
	while(s <= e) {
		long long m = (s+e)/2;
		if(valid(m)) {
			v = m;
			s = m+1;
		}
		else {
			e = m-1;
		}
	}
	cout << v;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
