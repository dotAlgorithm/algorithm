#include <bits/stdc++.h>

using namespace std;

<<<<<<< HEAD
int a, i;
=======
long long a, b, c;
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> a;
<<<<<<< HEAD
	if(a==1) cout<<"1";
	else{
		while(++i){	
			if(1+6*(i-1) < a && a <= 1+6*(i)){
				cout << i;
				break;
			}	
		}
	}
		
=======
	b = 1;
	c = 1;
	while(a>b){
		b+=6*c++;
	}
	cout<<c;
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3
	return 0;
}
