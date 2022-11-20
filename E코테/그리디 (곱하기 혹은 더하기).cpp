#include <bits/stdc++.h>
#include <string>

using namespace std;

int i, sum;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	
	// 내가 작성 
	/*
	for(i;i<s.size();i++){
		if(s[i] != '0'){
			if(!sum) sum = s[i]-'0';
			else sum *= s[i]-'0';
		}
	}
	cout << sum;
	*/
	
	//dbn
	long long result = s[0] -'0';
	for(int i = 1; i< s.size(); i++) {
		int num = s[i] - '0';
		if(num<=1 || result <=1) result += num;
		else result *= num;
		cout << result << "\n";
	}
	cout << result << '\n';
	return 0;
}
