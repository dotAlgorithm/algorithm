// acmicpc 13023
// authored by jihwankim
// code.plus
// 23-09-07 PM 05:00
#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> arr[2005];
bool visited[2005];

void input() {
	cin >> n >> m;
	for(int i = 0; i<m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
}

bool rec(int v, int k) {
	if(k == 5) return true;
	for(int i = 0; i<arr[v].size(); i++) {
		if(!visited[arr[v][i]]) {
			visited[arr[v][i]] = true;
			if(rec(arr[v][i], k+1)) return true;
			visited[arr[v][i]] = false;
		}
	}
	return false;
}

bool solve() {
	for(int i = 0; i<n; i++) {
		visited[i] = true;
		if(rec(i, 1)) return true;
		visited[i] = false;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	cout << solve();
	
	return 0;
}

// 05:37
