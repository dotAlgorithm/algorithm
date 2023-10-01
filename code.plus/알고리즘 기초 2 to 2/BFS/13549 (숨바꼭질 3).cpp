// acmicpc 13549
// authored by jihwankim
// code.plus
// 23-09-13 PM 04:49
#include <bits/stdc++.h>

using namespace std;

int n, k;
int min_time[100005];

void input() {
	cin >> n >> k;
	for(int i = 0; i <= 100000; i++) {
		min_time[i] = INT_MAX;
	}
	min_time[n] = 0;
}

void solve() {
	queue<int> q;
	q.push(n);
	
	while(!q.empty()) {
		int x = q.front(); q.pop();
		
		int cnt = min_time[x];
		int front = x+1;
		int back = x-1;
		int teleport = x*2;
		
		if(front <= 100000 && min_time[front] > cnt + 1) {
			q.push(front);
			min_time[front] = cnt + 1;
		}
		if(teleport <= 100000 && min_time[teleport] > cnt) {
			q.push(teleport);
			min_time[teleport] = cnt;
		}
		if(back >= 0 && min_time[back] > cnt + 1) {
			q.push(back);
			min_time[back] = cnt + 1;
		}
	}
	
	cout << min_time[k];
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// PM 05 : 10
