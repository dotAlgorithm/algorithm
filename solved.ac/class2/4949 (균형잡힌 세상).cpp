#include <bits/stdc++.h>

using namespace std;

string s;

void solve() {
	
	stack<char> st;
	
	for(int i = 0; i<s.size(); i++) {
		if(s[i] == '(' || s[i] == '[') st.push(s[i]);
		if(s[i] == ')' || s[i] == ']') {
			if((!st.empty() && st.top() == '(') && s[i] == ')') st.pop();
			else if((!st.empty() && st.top() == '[') && s[i] == ']') st.pop();
			else {
				st.push(s[i]);
				break;
			}
		}
	}
	
	if(!st.empty()) cout << "no\n";
	else cout << "yes\n";
	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	while(getline(cin, s)) {
		if(s == ".") break;
		solve();
	}
	
	return 0;
}
