#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, i;
	 
	cin >> n;
	
	for(i = 0; i<9; i++)
		cout << n << " * " << i+1 << " = " << n*(i+1)<<endl;
	
	return 0;
}
