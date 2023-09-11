// acmicpc 11724
// authored by jihwankim
// code.plus
// 23-09-08 AM 03:57
#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> arr[1005];
bool visited[1005];

void input() {
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
}

void dfs(int x) {
	for(auto &i : arr[x]) {
		if(!visited[i]) {
			visited[i] = true;
			dfs(i);
		}
	}
}

void solve() {
	int cnt = 0;
	for(int i = 1; i <= n; i++) {
		if(!visited[i]) {
			cnt++;
			visited[i] = true;
			dfs(i);
		}
	}
	cout << cnt;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve()	;	
	
	return 0;
}

// AM 04:02 
