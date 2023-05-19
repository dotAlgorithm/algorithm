#include <bits/stdc++.h>

using namespace std;

long long cnt=1, a ,b ,c;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> a >> b>> c;
	
	if (c<b || (c==0 && b==0) || c==b){
		cout << -1;
	}
	else{
		int bc = c-b;
		int abc = a/bc+1;
		cout << abc ;	
	}
	
	return 0;
}
