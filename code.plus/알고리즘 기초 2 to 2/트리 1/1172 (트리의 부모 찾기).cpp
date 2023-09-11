// acmicpc 11725
// authroed by jihwankim
// code.plus
// 23-09-12 AM 02:55
#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> arr[100005];
int parents[100005];

void input() {
	cin >> n;
	for(int i = 0; i<n-1; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
}

void dfs(int node, int parent) {
	parents[node] = parent;
	for(int &child : arr[node]) {
		if(parent == child) continue;
		dfs(child, node);
	}
}

void solve() {
	dfs(1, 0);
	for(int i = 2; i <= n; i++) cout << parents[i] << '\n';
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// AM 03:02
