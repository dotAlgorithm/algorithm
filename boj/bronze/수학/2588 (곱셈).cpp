#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);      
	cin.tie(0);             
	int *n = new int[2];
	cin >> n[0];
	cin >> n[1];
	cout << n[0] * (n[1] % 10) << endl;
	cout << n[0] * ((n[1] % 100) / 10) << endl;
	cout << n[0] * (n[1] / 100) << endl;
	cout << n[0] * n[1] << endl; 
	return 0;
}
