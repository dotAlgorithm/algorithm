#include <bits/stdc++.h>

using namespace std; 

int cnt, a, b, m_n;
bool is_true(int n){
	if (n==1) return false;
	for(int i = 2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	cin >> a >> b;
	for(a;a<=b;a++)
		if(is_true(a)){
			if(cnt == 0) m_n = a;
			cnt+=a;
		}
	!cnt ? printf("-1") : printf("%d\n%d",cnt,m_n);
	return 0; 
}
