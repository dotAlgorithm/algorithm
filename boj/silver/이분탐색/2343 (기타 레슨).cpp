#include <bits/stdc++.h>

using namespace std;

int n, m;
int blueRay[100001];

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) cin >> blueRay[i];
}

bool valid(int min) {
	int cnt = 1; int sum = 0;
	for(int i = 0; i<n; i++) {
		if(blueRay[i] > min) return false; 
		if(sum + blueRay[i] <= min) {
			sum += blueRay[i];
		}
		else {
			sum = blueRay[i]; 
			cnt++;
		}
	}
	return cnt <= m;
}

void solve() {
	int s = 0; int e = 1e9;
	// 강의 만분짜리 10만개, 블루레이 1개 일 때 e = 1만 * 10만;
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
