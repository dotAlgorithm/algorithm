//acm 20164
//authored by jihwankim
//23-06-06 AM 03:06

#include <bits/stdc++.h>
using namespace std;

int maxNum = 0; 
int minNum = INT_MAX;

void solve(string s, int cnt) {
	
	for(int i = 0; i<s.size(); i++) {
		int num = s[i]-'0';
		if(num%2 == 1) cnt++;
	}
	
	if(s.size() == 1) {
		maxNum = max(maxNum, cnt);
		minNum = min(minNum, cnt);
		return ;
	}
	 
	int num;
	if(s.size() == 2) {
		num = s[0]-'0' + s[1]-'0';
		solve(to_string(num), cnt);
	} 
	else {
		for(int i = 0; i<s.size()-2; i++) {
			for(int j = i+1; j<s.size()-1; j++) {
				string s1 = s.substr(0, i+1);
				string s2 = s.substr(i+1, j-i);
				string s3 = s.substr(j+1);
				//cout << s1 << ", " << s2 << ", " << s3 << "\n";
				num = stoi(s1) + stoi(s2) + stoi(s3);
				solve(to_string(num), cnt);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	string n;
	cin >> n;
	solve(n, 0);
	
	cout << minNum << " " << maxNum;
	
	return 0;
}

// AM 04:57
