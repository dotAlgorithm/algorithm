#include <bits/stdc++.h>

using namespace std;

string sort(string s){
	string nstr;
	string pri;
	stack<char> st;	
	int chk = 0;
	for(int i = 0; i<s.size(); i++){
		char ch = s[i];
		if(ch >= 'A' && ch <= 'Z') {
			if(!chk) {
				nstr += ch;
				continue;
			}
		}	
		if(ch == '(') {
			if(chk) pri+=ch;
			chk++;
			continue;	
		}
		else if(ch == ')') {
			if(chk>1) {
				pri += ch;
				chk--;
				continue;
			}
			nstr += sort(pri);
			chk--;
			continue;
		}
		else {
			if(chk>=1) {
				pri += ch;
				continue;
			}
		}
		
		if(st.empty()) {
			st.push(ch);
		}
		else {
			char top = st.top();
			if(top == '*' || top == '/') {
				if(ch == '*' || ch == '/') {
					nstr += st.top();
					st.pop();
				}
				else {
					while(!st.empty()){
						nstr += st.top();
						st.pop();
					}
				}
				st.push(ch);
			}
			else st.push(ch);
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
	cin >> str;	
	cout << sort(str);
	
		
	return 0;
}
