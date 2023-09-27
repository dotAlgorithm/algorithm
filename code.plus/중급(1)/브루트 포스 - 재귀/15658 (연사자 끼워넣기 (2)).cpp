// acmicpc 15658
// authored by jihwankim
// code.plus
// 23-09-19 PM 03:35
#include <bits/stdc++.h>

using namespace std;

int n;
int arr[15];
int op[4];
int max_sum = INT_MAX+1;
int min_sum = INT_MAX;

void input() {
	cin >> n;
	for(int i = 0; i < n; i++) cin >> arr[i];
	for(int i = 0; i < 4; i++) cin >> op[i];
}

void solve(int k, int sum) {
	if(k == n-1) {
		max_sum = max(max_sum, sum);
		min_sum = min(min_sum, sum);
		return ;
	}
	
	for(int i = 0; i < 4; i++) {
		if(op[i] > 0) {
			op[i]--;
			int cal = sum;
			if(i == 0) cal += arr[k+1];
			else if(i == 1) cal -= arr[k+1];
			else if(i == 2) cal *= arr[k+1];
			else cal /= arr[k+1];
			solve(k+1, cal);
			op[i]++;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0, arr[0]);
	cout << max_sum << '\n' << min_sum;
	
	return 0;
}
// PM 03:47
