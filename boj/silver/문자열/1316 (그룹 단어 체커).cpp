#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, cnt = 0;
	cin >> n;
	for(int i = 0; i<n; i++){
		string s;
		cin >> s;
		int arr[26] = {0,};
		arr[s[0]-'a'] = 1;
		bool check = true;
		for(int j = 1; j<s.size(); j++){
			if(!arr[s[j]-'a'] || s[j-1] == s[j]){
				arr[s[j]-'a']=1;	
			}
			else check = false;
		}
		if(check) cnt++;
	}
	cout << cnt;
	
	return 0;
}
