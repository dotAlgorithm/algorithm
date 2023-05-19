#include <bits/stdc++.h>

using namespace std;

bool chk;
string str;
string nstr;
stack<char> st;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	getline(cin, str);
	
	for(int i = 0; i<str.size(); i++){
		if(str[i] == '<'||chk){
			while(!st.empty()){
				nstr += st.top();
				st.pop();
			}
			nstr += str[i];
			chk = true;
		}
		else if(str[i]==' ') {
			while(!st.empty()){
				nstr += st.top();
				st.pop();
			}
			nstr += str[i];
		}
		else st.push(str[i]);
		if(str[i] == '>') chk = false;
	}
	
	while(!st.empty()){
		nstr += st.top();
		st.pop();
	}
	
	cout << nstr;
	
	return 0;
}
