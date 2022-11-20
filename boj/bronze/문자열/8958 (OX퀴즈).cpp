#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, i, j, cnt, o_cnt;
	string s;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> s;
		cnt = o_cnt = 0;
		for (j=0; j<s.size(); j++){
			if(s[j]=='O') {
				cnt++;	
				o_cnt += cnt;
			}
			else cnt = 0;
		}
		cout << o_cnt << " \n";
	}
	return 0;
}
