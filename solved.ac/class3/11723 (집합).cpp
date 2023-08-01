// acmicpc 11723
// authored by jihwankim
// solved.ac Class3
// 23-07-27 AM 09:57

#include <bits/stdc++.h>

using namespace std;

int n;
bool S[21];

void all() {
	for(int i = 1; i<=20; i++){
		S[i] = true;
	}
}

void emp() {
	for(int i = 1; i<=20; i++){
		S[i] = false;
	}
}

void solve() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		string s;
		int num;
		cin >> s;
		if(s == "all") all();
		else if(s == "empty") emp();
		else {
			cin >> num;
			if(s == "add") S[num] = true;
			else if(s == "check") cout << S[num] << "\n";
			else if(s == "remove") S[num] = false;
			else S[num] = S[num] ? false : true;
		}
	}	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}

// AM 10 : 07
