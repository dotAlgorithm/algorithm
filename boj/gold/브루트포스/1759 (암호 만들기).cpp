#include <bits/stdc++.h>

using namespace std;

int l, c;
char chr[15];
bool visited[15];
char aeiou[5] = {'a','e','i','o','u'};

void input() {
	cin >> l >> c; 
	for(int i = 0; i<c; i++) {
		cin >> chr[i];
	}
	sort(chr, chr+c);
}

bool vc(char word) {
	for(int i = 0; i<5; i++) 
		if(aeiou[i] == word) 
			return true;
	return false;
}

void rec(int k, string s, int ja, int mo) {
	if(k>c) return;
	if(s.size()==l) {
		if(ja >= 2 && mo >= 1) cout << s << "\n";
	}
	else {
		for(int i = k; i<c; i++) {
			if(vc(chr[i])) {
				rec(i+1, s+chr[i], ja, mo+1);
			}
			else {
				rec(i+1, s+chr[i], ja+1, mo);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	string s;
	rec(0, s, 0, 0);
	
	return 0;
}
