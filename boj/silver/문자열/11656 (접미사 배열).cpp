#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	priority_queue<pair<int, int> > q;
	string s;
	cin >> s;
	
	for(int i = 0; i<s.size(); i++){
		q.push({-(s[i]-'a'), i});
	}

		
	return 0;
}
