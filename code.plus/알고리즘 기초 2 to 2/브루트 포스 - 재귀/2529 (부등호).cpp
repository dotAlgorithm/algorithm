// acmicpc 2529
// authored by jihwankim
// code.plus
// 23-08-08 AM 03:56
#include <bits/stdc++.h>

using namespace std;

int n;
vector<char> cmp;
vector<string> nums;
bool visited[11];

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		char c;
		cin >> c;
		cmp.push_back(c);
	}
}

void solve(string s, int idx, int sidx) {
	if(sidx == n) {
		nums.push_back(s);
		return ;
	}
	for(int i = 0; i<=9; i++) {
		char c = i+'0';
		if(visited[i]) continue;
		visited[i] = true;
		if(cmp[idx] == '>') {
			if(s[sidx]-'0' > i) {
				solve(s+c, idx+1, sidx+1);
			}
		}
		else {
			if(s[sidx]-'0' < i) {
				solve(s+c, idx+1, sidx+1);
			}
		}
		visited[i] = false;
	}
	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	for(int i = 0; i<=9; i++) {
		string s;
		s+=(i+'0');
		visited[i] = true;
		solve(s, 0, 0);
		visited[i] = false;
	}
	sort(nums.begin(), nums.end());
	cout << nums[nums.size()-1] << "\n" << nums[0];
	
	return 0;
}
