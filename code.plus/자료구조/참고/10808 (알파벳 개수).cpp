#include <bits/stdc++.h>

using namespace std;

int arr[26];

int main() {
	string str;
	cin >> str;
	for(int i = 0; i<str.size(); i++) arr[str[i]-'a']++;
	for(int i = 0; i<26; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
