// acmicpc 1759
// authored by jihwankim
// 23-08-01 PM 10:56
// code.plus
#include <bits/stdc++.h>

using namespace std;

int n, m;
char arr[16];
bool chk[16]; 
char ap[] = {'a', 'e', 'i', 'o', 'u'};

void input() {
	cin >> n >> m;
	for(int i = 0; i<m; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+m);
}

void solve(int k, int idx, string s) {
	if(k == n) {
		int mo = 0;
		for(int i = 0; i<s.size(); i++) {
			for(int j = 0; j<5; j++) {
				if(s[i] == ap[j]) mo++;
			}
		}
		int za = (int)s.size() - mo;
		if(mo >= 1 && za >= 2) {
			cout << s << "\n";	
		}
		return ;
	}
	for(int i = idx; i<m; i++) {
		if(!chk[i]) {
			chk[i] = true;
			solve(k+1, i+1, s+arr[i]);
			chk[i] = false;
		}
	}	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	string s;
	input();
	solve(0, 0, s);
	
	return 0;
} 
// PM 11:08
