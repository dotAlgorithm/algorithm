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
	}a#include <bits/stdc++.h>

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
	long long int num1=0;
	long long int num2=0;
	for(int i = 0; i<a.size(); i++) {
		int size = a.size()-1;
		num1 += 0<size-i ? (a[i]-'0')*pow(10,size-i) : a[i]-'0';
	}
	for(int i = 0; i<b.size(); i++) {
		int size = b.size()-1;
		num2 += 0<size-i ? (b[i]-'0')*pow(10,size-i) : b[i]-'0';
	}
	cout << num1+num2;
	
	return 0;
}
	long long int num1=stoll(a);
	long long int num2=stoll(b);
	
	cout << num1+num2;
	
	return 0;
}
