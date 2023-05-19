#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	 
	int cnt = 0;
	
	if(s[1]=='='){
		if(s[0] == 'c' || s[0] == 'z' || s[0] == 's') cnt++;
		else cnt--;	
	}
	if( s[1]=='-') 
		if (s[0]=='c' || s[0] == 'd' ) cnt++;
		else cnt--;
	if((s[0]=='l' || s[0] =='n') && s[1] =='j') cnt++;
	
	for(int i = 2; i<s.size(); i++){
		char c = s[i-1];
		if(s[i] == 'j' && (c == 'n' || c=='l')) cnt++;
		if(s[i] == '=' ) {
			if(c == 'c' || c == 'z' || c == 's') {
				cnt++;	
			}
			else cnt--;	
			if(c == 'z' && s[i-2] == 'd') cnt++;
		}
		if( s[i]=='-') 
			if (c=='c' || c == 'd' ) cnt++;
			else cnt--;
	} 
	cout << s.size()-cnt;
	
	return 0;
}
