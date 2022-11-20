#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);      
	cin.tie(0);             
	int *n = new int[3];
	cin >> n[0] >> n[1] >> n[2];
	cout << (n[0]+n[1])%n[2] << endl;
	cout << ((n[0]%n[2]) + (n[1]%n[2]))%n[2] << endl;
	cout << (n[0]*n[1])%n[2] << endl;
	cout << ((n[0]%n[2]) * (n[1]%n[2]))%n[2] << endl;
	delete[] n;
	return 0;
}
