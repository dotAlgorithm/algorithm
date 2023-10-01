// acmicpc 16964
// authored by jihwankim
// code.plus
// 23-09-13 AM 05:28
#include <bits/stdc++.h>

using namespace std;

int n;
int cmp[100005];
vector<int> arr[100005];
vector<int> dfs, paths;
bool visited[100005];

void input() {
	cin >> n;
	for(int i = 1; i<n; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	for(int i = 0; i<n; i++) {
		int x;
		cin >> x;
		paths.push_back(x);
		cmp[paths[i]] = i;
	}
	for(int i = 1; i<=n; i++) {
		sort(arr[i].begin(), arr[i].end(),
		[&](const int &x1, const int &x2) {
			return cmp[x1] < cmp[x2];
		});
	}
}

void solve(int x) {
	if(visited[x]) return ;
	
	visited[x] = true;
	dfs.push_back(x);
	
	for(int &v : arr[x]) {
		solve(v);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(1);
	
	if(dfs == paths) cout << 1;
	else cout << 0; 
	
	return 0;
}
// AM 05:45
