#include <bits/stdc++.h>

using namespace std; 

int cnt, t, a;
bool is_true(int n){
	if (n==1) return false;
	for(int i = 2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	cin >> t;
	for(int i = 0;i<t;i++){
		cin >> a;
		cnt += is_true(a)?1:0;
	}
	cout << cnt;
	return 0; 
}
