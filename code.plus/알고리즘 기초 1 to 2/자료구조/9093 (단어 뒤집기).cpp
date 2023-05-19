#include <bits/stdc++.h>

using namespace std;
stack<char> str2;

void clear(vector<char> &result){
	while(!str2.empty()){
		result.push_back(str2.top());
		str2.pop();
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n ;
	cin.ignore();	
	
	while(n--){
		string str;
		vector<char> result;
		getline(cin, str);
		
		for(int i = 0; i<str.size(); i++){
			if(str[i] == ' ') {
				clear(result);
				result.push_back(' ');	
			}
			else str2.push(str[i]);
		}
		clear(result);
		result.push_back(' ');	
		
		for(int i = 0; i<result.size(); i++) cout << result[i];
		cout<<"\n";
		
	}
	return 0;
} 
