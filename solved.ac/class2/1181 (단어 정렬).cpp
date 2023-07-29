#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
	if(a.size() != b.size()) return a.size() < b.size();
	return a < b;
}
int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	
	string *s = new string[n];
	
	for(int i = 0 ; i<n ; i++) cin >> s[i];
	sort(s, s+n, cmp);
	
	cout << s[0] <<"\n";
	for(int i = 1 ; i<n ; i++) {
		if(s[i-1] == s[i]) continue;
		cout << s[i] <<"\n";
	}
	
	delete[] s;
	
	return 0;
}
