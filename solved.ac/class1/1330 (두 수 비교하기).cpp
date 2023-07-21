#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int* n = new int[2];
	cin >> n[0] >> n[1];
	n[0] > n[1] ? cout << ">" : (n[0] < n[1]) ? cout << "<" : cout << "=="; 
	
	delete[] n;
	return 0;
}
