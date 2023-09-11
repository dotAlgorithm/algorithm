// acmicpc 2250
// authored by jihwankim
// code.plus
// 23-09-12 AM 03:55
#include <bits/stdc++.h>

using namespace std;

int arr[10005][2];
int parent[10005];
vector<int> depth[10005];
int n, width, height;

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		arr[a][0] = b; arr[a][1] = c;
		if(b != -1) parent[b] = a;
		if(c != -1) parent[c] = a;
	}
}

void dfs(int a, int h) {
	if(a == -1) return;
	height = max(h, height);
	
	dfs(arr[a][0], h+1);
	depth[h].push_back(++width);
	dfs(arr[a][1], h+1);
}

int find_parent() {
	for(int i = 1; i <= n; i++) {
		if(parent[i] == 0) return i;
	}
}

void solve() {
	dfs(find_parent(), 1);
	
	int node;
	width = -1;
	
	for(int i = 1; i <= height; i++) {
		int diff = depth[i].back() - depth[i].front();
		if(diff > width) {
			width = diff;
			node = i; 
		}	
	}
	
	cout << node << ' ' << width + 1;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// AM 04:30
