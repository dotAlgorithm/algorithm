#include <bits/stdc++.h>

using namespace std;

int n, i, j=1;

int main(){
	cin >> n;
	for(i=1; n>i; i++) n-=i;
	int check = i;
	for(n; n>1; n--) {
		j++; i--;
	}
	if(check%2) cout << i << "/" << j;
	else cout << j << "/" << i;
	return 0;
}
