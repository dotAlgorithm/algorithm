// acmicpc 15664
// authored by jihwankim
// 23-07-27 AM 08:47
// code.plus
#include <bits/stdc++.h>

using namespace std;

int arr[9];
int save[9];
bool chk[9]; 
int n, m;

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);
}

void solve(int k, int idx) {
	if(k == m) {
		for(int i = 0; i<k; i++) {
			cout << save[i] << " ";
		}
		cout << "\n";
		return;
	}
	save[k] = 0;
	for(int i = idx; i<n; i++) {
		if(!chk[i]) {
			if(save[k] == arr[i]) continue;
			chk[i] = true;
			save[k] = arr[i];
			solve(k+1, i+1);
			chk[i] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0, 0);
	
	return 0;
}

// AM 08:48
