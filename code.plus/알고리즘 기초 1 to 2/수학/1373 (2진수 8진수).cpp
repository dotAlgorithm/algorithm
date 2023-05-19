#include <bits/stdc++.h>

using namespace std;

string s;

string arr[8] = {"000", "001", "010", "011", "100"
,"101", "110", "111"};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	string nstr;
	cin >> s;
	while(s.size()%3) {
		s = '0'+s;
	};
	for(int i =0; i<s.size(); i+=3) {
		string oct;
		for(int k = 0; k<3; k++)
			oct += s[i+k];
		for(int j = 0; j<8; j++){
			if(oct == arr[j]){
				nstr += j+'0';
			}	
		}
	}
	cout << nstr;
	return 0;
}
