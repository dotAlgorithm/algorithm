#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	int *fact = new int[n+1];
	fact[0] = fact[1] = 1;
	for(int i = 2; i<=n; i++) fact[i] = i*fact[i-1];
	cout << fact[n];
	delete[] fact;
	
	return 0;
}
