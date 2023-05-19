#include <bits/stdc++.h>

using namespace std;

int n;

bool hansu(int num){
	int s = num/100;
	int m = (num/10)%10;
	int e = num%10;
	if(m - e != s-m) return false;
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	int cnt = 99;
	if(n<100) cout << n;
	else {
		for(int i = 100; i<n+1; i++){
			cnt += hansu(i);
		}
		cout << cnt;
	}
	
	return 0;
}
