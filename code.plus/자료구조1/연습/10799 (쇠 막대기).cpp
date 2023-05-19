#include <bits/stdc++.h>

using namespace std;

string str;
stack<char> st;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> str;
	
	int cnt = 0;
	
	for(int i = 0; i < str.size(); i++){
		if(str[i] == '(') {
			st.push('(');
		}
		else if (str[i-1] == ')'){
			st.pop();
			cnt+=1;
		}
		else {
			st.pop();
			cnt += st.size();
		}
	} 
	
	cout << cnt;
	return 0;
}
