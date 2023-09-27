// acmicpc 16198
// authored by jihwankim
// code.plus
// 23-09-21 AM 02:23
#include <bits/stdc++.h>

using namespace std;

int n;
int ans = 0;
int arr[15]; 
bool visited[15];

void input() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void solve(int k, int energe) {
	if(k == n-2) {
		ans = max(ans, energe);
		return ;
	}
	
	for(int i = 1; i < n-1; i++) {
		if(!visited[i]) {
			visited[i] = true;
			int j = i, z = i;
			for(j; visited[j]; j--);
			for(z; visited[z]; z++);
			solve(k+1, energe + arr[j] * arr[z]);
			visited[i] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0, 0);
	cout << ans;
	
	return 0;
}
// AM 02 : 42
