#include <bits/stdc++.h>

using namespace std;

int check[26];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	for(int i = 0; i<s.size(); i++){
		if(s[i] >= 'A' && s[i] <='Z') s[i] += 32;
		check[s[i]-'a']++;
	}
	priority_queue<pair<int, int> > pq;
	for(int i=0;i<26;i++) pq.push({check[i], i});
	pair<int, int> a = pq.top(); pq.pop();
	if(a.first == pq.top().first) cout << "?";
	else cout << (char)(a.second+'A');
	
	return 0;
}
