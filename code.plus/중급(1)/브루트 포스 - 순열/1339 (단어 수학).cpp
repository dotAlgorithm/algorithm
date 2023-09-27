// acmicpc 1339
// authored by jihwankim
// code.plus
// 23-09-18 AM 02:04
#include <bits/stdc++.h>

using namespace std;

int n;
vector<string> arr;
vector<char> word;
bool chk[26];
int alpha[26];

void input() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		arr.push_back(s);
		for(char c : s) {
			if(!chk[c-'A']) {
				chk[c-'A'] = true;
				word.push_back(c);
			}
		}
	}
}

void solve() {
	vector<int> num;
	int max_sum = 0;
	
	for(int i = 0; i < word.size(); i++) num.push_back(9-i);
	
	do{
		int sum = 0;
		
		for(int i = 0; i < word.size(); i++) {
			alpha[word[i]-'A'] = num[i];
		}
	
		for(string s : arr) {
			int word_sum = 0;
			for(char c : s) {
				word_sum = word_sum * 10 + alpha[c-'A'];
			}
			sum += word_sum;
		}
		max_sum = max(sum, max_sum);
		
	}
	while(prev_permutation(num.begin(), num.end()));
	
	cout << max_sum;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// AM 02:44
