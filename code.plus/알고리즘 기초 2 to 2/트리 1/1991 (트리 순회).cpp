// acmicpc 1991
// authored by jihwankim
// code.plus
// 23-09-12 AM 02:44
#include <bits/stdc++.h>

using namespace std;

int n;
vector<char> arr[27];

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		char a, b, c;
		cin >> a >> b >> c;
		arr[a-'A'].push_back(b);
		arr[a-'A'].push_back(c);
	}
}

void order(int a, char* c) {
	if(c == "pre") cout << (char)(a+'A');
	if(arr[a][0] != '.') order(arr[a][0] - 'A', c);
	if(c == "in") cout << (char)(a+'A');
	if(arr[a][1] != '.') order(arr[a][1] - 'A', c);
	if(c == "post") cout << (char)(a+'A');
}

void solve() {
	order(0, "pre"); cout << '\n';
	order(0, "in"); cout << '\n';
	order(0, "post");
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// AM 02:54
