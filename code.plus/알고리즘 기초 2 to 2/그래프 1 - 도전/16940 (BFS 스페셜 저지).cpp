// acmicpc 16940
// authroed by jihwankim
// code.plus
// 23-09-13 AM 03:56
#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> arr[100005];
int cmp[100005];
int paths[100005];
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
		cin >> paths[i];
		cmp[paths[i]] = i;
	}
	for(int i = 1; i <= n; i++) {
		sort(arr[i].begin(), arr[i].end(), 
		[&](const int &a, const int &b) {
			return cmp[a] < cmp[b];
		});
	}
}

void solve() {
	queue<int> q;
	q.push(1);
	visited[1] = true;
	int idx = 0;
	
	while(!q.empty()) {
		int x = q.front(); q.pop();
		if(x != paths[idx++]) {
			cout << 0;
			return ;
		}
		
		for(int &v : arr[x]) {
			if(visited[v]) continue;
			visited[v] = true;
			q.push(v);
		}
	}
	cout << 1;
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// other solution
