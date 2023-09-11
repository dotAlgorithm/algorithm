// acmicpc 1707
// authored by jihwankim
// code.plus
// 23-09-08 AM 05:17
#include <bits/stdc++.h>

using namespace std;

int v, e;
vector<int> arr[20005];
bool visited[20005];
bool color[20005];

void input() {
	cin >> v >> e;
	for(int i = 0; i<e; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
}

bool dfs(int a, bool c) {
	color[a] = c;
	bool next_color = c ? false : true;
	for(int &x : arr[a]) {
		if(!visited[x]) {
			visited[x] = true;
			if(!dfs(x, next_color)) return false;
		}
		else if(c == color[x]) return false;
	}
	return true;
}

void solve() {
	for(int i = 1; i <= v; i++) {
		if(!visited[i]) {
			visited[i] = true;
			if(!dfs(i, false)) {
				cout << "NO\n";
				return ;
			}
		}
	}
	cout << "YES\n";
}

void clear() {
	for(int i = 1; i<=v; i++) {
		arr[i].clear();
		visited[i] = false;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		input();
		solve();
		clear();
	}
	
	return 0;
}
// AM 05:40
