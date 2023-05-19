#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	string str;
	getline(cin, str);
	
	for(int i = 0; i<str.size(); i++){
		char ch = str[i];
		if(ch>='A' && ch <= 'Z') {
			if(ch-'A' >= 13) ch -= 13;
			else ch += 13; 
		}
		if(ch >= 'a' && ch <= 'z'){
			if(ch-'a' >= 13) ch -= 13;
			else ch += 13; 
		}
		cout << ch;
	} 
	
	return 0;
}
