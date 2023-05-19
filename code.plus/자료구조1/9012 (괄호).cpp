#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n ;
	cin.ignore();	
	while(n--){
		string str;
		stack<char> str2;
		int check = 0;
		cin >> str;
		for(int i = 0;i<str.size();i++)	{
			if(str[i] == '(') str2.push(str[i]);
			else {
				if(str2.empty()) {
					cout << "NO\n";
					check = 1;
					break;
				}
				else str2.pop();
			}	
		}
		if(!check){
			if(str2.empty()) cout << "YES\n";
			else cout << "NO\n";
			
		}
		
	}
	return 0;
} 

/*

void check(stack<char> &str){
	if(str.top()=='(' || str.size()%2) {
		cout << "NO\n";
		return;
	}
	while(!str.empty()){
		str.pop();
		str.pop();
	}
	cout << "YES";
	
}
*/
