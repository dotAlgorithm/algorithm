// acmicpc 1541
// authored by jihwankim
// 23-07-29 PM 04:16
// solved.ac Class3
#include <bits/stdc++.h>

using namespace std;

string s;
vector<int> nums;

void input() {
	cin >> s;
	string num;
	bool minus = false;
	for(int i = 0; i<s.size(); i++) {
		if(s[i] == '+' || s[i] == '-') {
			if(minus) nums.push_back(-stoi(num));
			else nums.push_back(stoi(num));
			if(s[i] == '-') minus = true;
			num.clear();
		}
		else num += s[i];
	}
	if(minus) nums.push_back(-stoi(num));
	else nums.push_back(stoi(num));
}

void solve() {
	int sum = 0;
	for(int i = 0; i<nums.size(); i++) {
		sum += nums[i];
	}
	cout << sum;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	return 0;
}
// PM 04:34
