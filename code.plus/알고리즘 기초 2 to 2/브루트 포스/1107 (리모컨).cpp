// acmicpc 1107
// code.plus
// authored by jihwankim
// 23-07-24 AM 08:17
#include <bits/stdc++.h>

using namespace std;

int n, m;
int diff;
bool broken[10];

void input() {
	cin >> n >> m;
	for(int i = 0; i<m; i++) {
		int num;
		cin >> num;
		broken[num] = true;
	}
	diff = abs(n - 100);
}

void makeNum(int num) {
	if(num > 1000000) return;
	for(int i = 0; i<10; i++) {
		if(broken[i]) continue;
		if(i==0 && num == 0) continue;
		makeNum(num*10 + i);
	}
	int size = to_string(num).size();
	diff = min(diff, abs(n-num)+size);
}

void solve() {
	for(int i = 0; i<10; i++) {
		if(broken[i]) continue;
		makeNum(i);	
	}
	cout << diff;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
} 
// AM 08:54
