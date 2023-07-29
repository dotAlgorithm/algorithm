//acmicpc 2798
//authored by jihwankim
//2023 - 06 - 15 AM 02:03

#include <iostream>

using namespace std;

int n, m;
int arr[101];
int blackJack = 0;

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) cin >> arr[i];
}

void solve(int sum, int cnt, int idx) {
	if(cnt == 3) {
		if(sum <= m && m-blackJack > m-sum) {
			blackJack = sum;	
		}
		return;
	}
	if(idx >= n) {
		return;
	}
	solve(sum+arr[idx], cnt+1, idx+1);
	solve(sum, cnt, idx+1);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0, 0, 0);
	cout << blackJack;
	
	return 0;
}

// AM 02:15
