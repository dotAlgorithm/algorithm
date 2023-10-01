// acmicpc 14226
// authored by jihwankim
// code.plus
// 23-09-13 PM 04:07
#include <bits/stdc++.h>

using namespace std;

int n;
int min_time[1005]; 

void solve() {
	for(int i = 1; i<=1000; i++) {
		min_time[i] = INT_MAX;
	}
	queue<pair<int, int>> q;
	q.push({1, 0});
	
	while(!q.empty()) {
		int x = q.front().first;
		int cnt = q.front().second; q.pop();
		
		for(int i = x, idx = 0; i <= 1000; i += x, idx++) {
			int copyPaste = cnt + idx + 1;
			if(min_time[i] > copyPaste) {
				min_time[i] = copyPaste;
				q.push({i, copyPaste});
			}
		}
		
		for(int i = x, idx = 0; i > 1; i--, idx++) {
			int del = cnt + idx;
			if(min_time[i] > del) {
				min_time[i] = del;
				q.push({i, del});
			}
		}	
	}
	cout << min_time[n];
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n;
	solve();
	
	return 0;
}
// PM 04:36
