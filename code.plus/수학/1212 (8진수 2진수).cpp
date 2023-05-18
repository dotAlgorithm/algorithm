#include <bits/stdc++.h>

using namespace std;

string s;

string nstr;

string arr[8] = {"000", "001", "010", "011", "100"
,"101", "110", "111"};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> s;
	if(s=="0") {
		cout << "0";
		return 0;
	}
	int size = s.size();
	while(size--){
		nstr += arr[s[s.size()-size-1]-'0'];
	}
	while(nstr[0]=='0') {
		nstr.erase(0, 1);
	}
	cout << nstr;
	return 0;
}
