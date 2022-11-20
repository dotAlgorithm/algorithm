#include <bits/stdc++.h>

using namespace std;

string s;
//vector<char> result;
//int value;
int i, n;
string result = "";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> s;
	sort(s.begin(), s.end());
	for(i;i<s.size();i++){
		if(s[i]-'0' <= 9) n += s[i]-'0';
		else result += s[i];
	}
	cout << result;
	if(n) cout << n;
	
	/*
	cin >> s;
	for(int i =0; i< s.size(); i++){
		if(isalpha(s[i])) result.push_back(s[i]);
		else value += s[i]-'0';
	}
	sort(result.begin(), result.end());
	for(int i = 0; i<result.size(); i++) cout << result[i];
	if(value) cout << value;
	*/

	return 0;
}
