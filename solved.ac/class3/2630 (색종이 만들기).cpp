// acmicpc 2630
// authored by jihwankim
// 23-07-29 PM 03:42
// solved.ac Class3
#include <bits/stdc++.h>

using namespace std;

int n;
int arr[130][130];
int one, zero;

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cin >> arr[i][j];
		}
	}
}

void solve(int ts, int te, int bs, int be) {
	int temp = arr[ts][bs];
	bool chk = false;
	for(int x = ts; x <= te; x++) {
		for(int y = bs; y <= be; y++) {
			if(temp != arr[x][y]) {
				chk = true;
				break;
			}
		}
		if(chk) break;
	}
	if(chk) {
		int tmid = (ts+te)/2;
		int bmid = (bs+be)/2;
		solve(ts, tmid, bs, bmid);
		solve(tmid+1, te, bs, bmid);
		solve(ts, tmid, bmid+1, be);
		solve(tmid+1, te, bmid+1, be);
	} else {
		if(temp == 1) one++;
		else zero++;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0, n-1, 0, n-1);
	cout << zero << "\n" << one; 
	
	return 0;
}
// PM 04:14
