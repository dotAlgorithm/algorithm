// acmicpc 11279
// authored by jihwankim
// 23-08-05 PM 10:54
// solved.ac Class3
#include <bits/stdc++.h>

using namespace std;

int n;
priority_queue<int> pq;

void solve(int num) {
	if(num == 0) {
		if(pq.empty()) cout << 0;
		else {
			cout << pq.top();
			pq.pop();	
		}
		cout << "\n";
	}
	else {
		pq.push(num);
	}
}

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		int num;
		cin >> num;
		solve(num);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	
	return 0;
}
// PM 10:57
