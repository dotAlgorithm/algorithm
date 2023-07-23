#include <bits/stdc++.h>

using namespace std;

int chk;
stack<char> st;
string sort(string s){
	string nstr;
	for(int i = 0; i<s.size(); i++){
		char ch = s[i];
		if(ch >= 'A' && ch <= 'Z') nstr += ch;
		else {
			if (st.empty() || ch == '(') st.push(ch);
			else {
				if(ch == ')') {
					while(st.top() != '('){
						nstr += st.top();
						st.pop();
					}
					st.pop();
				}
				else {
					if (ch=='+' || ch == '-') {
						if(st.top() == '*' || st.top() == '/') {
							nstr += st.top();
							st.pop();
						}
						if(!st.empty() && (st.top() == '+' || st.top() == '-')){
							nstr += st.top();
							st.pop();
						}
						st.push(ch);
					}
					else {
						if(st.top() == '*' || st.top() == '/') {
							nstr += st.top();
							st.pop();
						}
						st.push(ch);
					}
				}
				
			}
		}
	}
	while(!st.empty()) {
		nstr += st.top();
		st.pop();
	}
	return nstr;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	string str;
	string nstr;
	cin >> str;
	
	cout << sort(str);
		
	return 0;
}
