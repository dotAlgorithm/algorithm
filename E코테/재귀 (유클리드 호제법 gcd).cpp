#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	if(!(a%b)) return b;
	return gcd(b, a%b);
}
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	
	cout << "gcd(192, 162) = " << gcd(192,162) << "\n";
	
	return 0;
}
