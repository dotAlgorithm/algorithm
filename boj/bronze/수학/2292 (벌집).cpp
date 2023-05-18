#include <bits/stdc++.h>

using namespace std;

long long a, b, c;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> a;
	b = 1;
	c = 1;
	while(a>b){
		b+=6*c++;
	}
	cout<<c;
	return 0;
}
