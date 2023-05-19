#include <bits/stdc++.h>

using namespace std;

int arr[26], i;

int main() {
	fill(arr,arr+26,-1);
	
	string s;
	cin >> s;
	
	for(i=0;i < s.size();i++)
		if (arr[s[i]-'a'] == -1 ) arr[s[i]-'a'] = i;
	for(i = 0;i<26;i++) printf("%d ",arr[i]);
	
	return 0;
}
