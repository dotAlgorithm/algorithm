#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n; 
	for(int i = 0; i<n; i++){
		int iter;
		string s;
		cin >> iter >> s;
		for(int j = 0; j<s.size();j++){
			for(int k = 0; k<iter; k++) cout << s[j];
		}cout << "\n";
		
	}
	return 0;
}
