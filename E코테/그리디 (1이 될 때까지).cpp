#include <bits/stdc++.h>

using namespace std;

int cnt, t;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	
	/*while(n!=1){
		if(n%k==0) {
			n/=k;
			cnt++;		
		}
		else {
			n-=1;
			cnt++;	
		}
	}*/
	while(n!=1) {
		t = n/k * k;
		if(t==0) {
			cnt += n-t-1;
			break;
		}
		cnt += n-t+1; 
		n = t; 
		n/=k; 
	}
	
	cout << cnt;

	return 0;
}
