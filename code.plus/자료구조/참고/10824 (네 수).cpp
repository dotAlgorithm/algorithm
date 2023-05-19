#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	string a;
	string b;
	string str;
	
	for(int i=0;i<2;i++){
		cin >> str;
		a+=str;
	}
	for(int i=0;i<2;i++){
		cin >> str;
		b+=str;
	}
	long long int num1=stoll(a);
	long long int num2=stoll(b);
	
	cout << num1+num2;
	
	return 0;
}
