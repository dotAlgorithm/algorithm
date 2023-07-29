// acmicpc 15649
// authored by jihwankim
// code.plus
// 23-07-26 AM 05:06
#include <bits/stdc++.h>

using namespace std;

int n, m;
bool visited[9];
int arr[9]; 

void solve(int k) {
	if(k == m) {
		for(int i = 0; i<k; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return ;
	}
	
	for(int i = 1; i<=n; i++) {
		if(!visited[i]) {
			arr[k] = i;
			visited[i] = true;
			solve(k+1);
			visited[i] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n >> m;
	solve(0);
	
	return 0;
}
// AM 05:17
