#include <bits/stdc++.h>

using namespace std; 

int a;
int main(){
	cin >> a;
	while(a>1) {
		for(int i = 2;i<=a; i++){
			while( a%i==0) {
				a/=i;
				printf("%d\n", i);
			}
		}
	}
	return 0; 
}
