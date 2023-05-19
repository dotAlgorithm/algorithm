#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	while(true) {
		string str;
		getline(cin, str);
		if(cin.eof()) break;
		int arr[4] = {0,};
		for(int i = 0; i<str.size(); i++){
			if(islower(str[i])) arr[0]++;
			if(isupper(str[i])) arr[1]++;
			if(isdigit(str[i])) arr[2]++;
			if(isspace(str[i])) arr[3]++;
		}
		for(int i=0; i<4; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
		
	return 0;
}
