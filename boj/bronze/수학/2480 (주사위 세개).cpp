#include <bits/stdc++.h>
#define max(a,b) (((a)>(b))?(a):(b))
using namespace std;

int dice(int a, int b, int c){
	if(a==b && b==c) return 10000+(a*1000);
	if(a==b || a==c) return 1000+(a*100);
	if(b==c) return 1000+(b*100);
	return max(a,max(b,c))*100;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, c;
	cin >> a >> b >> c;
	cout << dice(a,b,c);
	return 0;
}
