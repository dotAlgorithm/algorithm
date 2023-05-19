#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s1, s2;
	cin >> s1 >> s2;
	int n1, n2;
	n1 = s1[0]-'0' + (s1[1]-'0')*10 + (s1[2]-'0')*100;
	n2 = s2[0]-'0' + (s2[1]-'0')*10 + (s2[2]-'0')*100;
	cout << max(n1,n2);
	return 0;
}
