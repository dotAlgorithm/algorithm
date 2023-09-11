// acmicpc 1167
// authored by jihwankim
// code.plus
// 23-09-12 AM 03 : 26
#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<int, int>> arr[100005];
int find_node;
int find_dist;

void input() {
	cin >> n;
	for(int i = 0; i<n-1; i++) {
		int node1, node2, dist;
		cin >> node1 >> node2 >> dist;
		arr[node1].push_back({node2, dist});
		arr[node2].push_back({node1, dist}); 
	}
}

void dfs(int node, int parent, int dist) {
	if(find_dist < dist) {
		find_node = node;
		find_dist = dist;
	}
	for(auto &child : arr[node]) {
		if(child.first == parent) continue;
		dfs(child.first, node, dist+child.second);
	}
}

void solve() {
	dfs(1, 0, 0);
	dfs(find_node, 0, 0);
	cout << find_dist;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// AM 03:27
