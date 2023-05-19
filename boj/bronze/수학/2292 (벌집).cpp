#include <bits/stdc++.h>

using namespace std;

int a, i;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> a;
	if(a==1) cout<<"1";
	else{
		while(++i){	
			if(1+6*(i-1) < a && a <= 1+6*(i)){
				cout << i;
				break;
			}	
		}
	}
		
	return 0;
}
