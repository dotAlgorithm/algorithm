// acmicpc 1182
// authroed by jihwankim
// code.plus
// 23-09-06 AM 05:12
#include <iostream>

using namespace std;

int n, s;
int arr[20];

void input() {
	cin >> n >> s;
	for(int i = 0 ; i<n; i++) cin >> arr[i];
} 

void solve() {
	int cnt = 0;
	// 공집합일 때 s가 무조건 0이므로 cnt가 하나 더 셈 
	for(int i = 1; i<(1<<n); i++) {
		int sum = 0;
		for(int j = 0; j<n; j++) {
			if(i&(1<<j)) sum += arr[j];
		}
		if(sum == s) cnt++;
	}
	cout << cnt;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
    return 0;
}
// AM 05:47
