#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int N, i, a, b;
	cin >> N;
	
	
	for(i=1; i<=N; i++) {
		string s = "";
		for(int j=0; j<N-i; j++) s+=" ";
		for(int j=0; j<i; j++ ) s+="*"; 
		cout << s << "\n";
	}
	return 0;
}
