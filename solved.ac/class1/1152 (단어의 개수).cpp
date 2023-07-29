#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	getline(cin, s);
	int cnt = 1;
	if(s.size()==1 && s[0] == ' ') cnt = 0;
	for(int i=1; i<s.size()-1; i++){
		if(s[i]==32&&s[i-1]!=32) cnt++;
	} 
	cout << cnt;
	return 0;
}
