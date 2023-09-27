// acmicpc 16928
// authored by jihwankim
// code.plus
// 23-09-27 PM 04:03
#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[101];
bool visited[101];

void input() {
	cin >> n >> m;
	int a, b;
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		arr[a] = b;
	} 
	for(int i = 0; i < m; i++) {
		cin >> a >> b;
		arr[a] = b;
	}
}

void solve() {
	queue<pair<int, int>> q;
	q.push({1, 0});
	visited[1] = true;
	
	while(!q.empty()) {
		int x = q.front().first;
		int cnt = q.front().second; q.pop();
		
		if(x == 100) {
			cout << cnt;
			return ;
		}
		
		for(int i = 1; i <= 6; i++) {
			if(x+i > 100) break;
			if(visited[x+i]) continue;
			if(arr[x+i] != 0) {
				q.push({arr[x+i], cnt+1});
				visited[arr[x+i]] = true;	
			}
			else {
				q.push({x+i, cnt+1});
				visited[x+i] = true;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// PM 04:13
