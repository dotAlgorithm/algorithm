#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, i, ten, one, new_n=-1;
	cin >> n;
	
	int temp =n;
	for(i=0; n!=new_n; i++){
		ten = temp/10;
		one = temp%10;	
		temp = one*10+(ten+one)%10;
		new_n = temp;
	}
	cout << i;
	return 0;
}
