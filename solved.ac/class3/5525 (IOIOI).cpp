// acmicpc 5525
// authored by jihwankim
// 23-08-06 AM 12:47
// solved.ac Class3
#include <bits/stdc++.h>

using namespace std;

int n, m;
string ioi;
string str;
void input() {
	cin >> n >> m >> str;
}

void solve() {
	int cnt = 0;
	for(int i = 0; i<m; i++) {
		if(str[i] == 'O') continue;
		int ioiCnt = 0;
		while(str[i+1] == 'O' && str[i+2] == 'I') {
			ioiCnt++;
			if(ioiCnt == n) {
				cnt++;
				ioiCnt--;
			}
			i+=2;
		}
	}
	cout << cnt;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// Am 01:00
