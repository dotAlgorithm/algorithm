// amcicpc 11723
// authored by jihwankim
// code.plus
// 23-09-06 AM 04:17
#include <bits/stdc++.h>

using namespace std;

int n;
int bit;

bool chk(int num) {
	return (bit & (1 << num)) > 0;
}

void solve(string &op) {
	int num;
	if(op == "add") {
		cin >> num;
		if(!chk(num)) bit = bit | (1 << num);
	}
	else if(op == "check") {
		cin >> num;
		if(chk(num)) cout << "1\n";
		else cout << "0\n";
	}
	else if(op == "toggle") {
		cin >> num;
		bit = bit ^ (1 << num);
	}
	else if(op == "remove") {
		cin >> num;
		if(chk(num)) bit = bit & ~(1 << num);
	}
	else if(op == "all") bit = (1<<n) - 1;
	else bit = 0;
}
void input() {
	cin >> n;
	string op;
	for(int i = 0; i<n; i++) {
		cin >> op;
		solve(op);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	
	return 0;
} 
// AM 04:58
