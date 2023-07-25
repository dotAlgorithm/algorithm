// acmicpc 9095
// authored by jihwankim
// code.plus
// 23-07-26 AM 04:51

#include <bits/stdc++.h>

using namespace std;

int t, n;
int arr[12];

void possible(int num, int sum) {
	if(num == sum) {
		arr[num]++;
		return ;
	}
	for(int i = 1; i<=3; i++) {
		if(sum + i <= num) {
			possible(num, sum+i);
		}
	}
}

void init() {
	for(int i = 1; i<=11; i++) {
		possible(i, 0);		
	}	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> t;
	init();
	while(t--) {
		cin >> n;
		cout << arr[n] << "\n";	
	}
	
	return 0;
}
