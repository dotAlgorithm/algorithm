// acmicpc 13913
// authored by jihwankim
// code.plus
// 23-09-13 AM 06:07
#include <bits/stdc++.h>

using namespace std;

int n, k;
bool visited[100005];
int paths[100005];

void input() {
	cin >> n >> k;
}

int bfs() {
	queue<pair<int, int>> q;
	q.push({n, 0});
	visited[n] = true;
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second; q.pop();
		int nx1 = x-1, nx2 = x+1, nx3 = x*2;
		
		if(x == k) return y;
		
		if(nx1 >= 0) {
			if(!visited[nx1]) {
				visited[nx1] = true;
				q.push({nx1, y+1});
				paths[nx1] = x;
			}	
		}
		if(nx2 <= 100000) {
			if(!visited[nx2]) {
				visited[nx2] = true;
				q.push({nx2, y+1});
				paths[nx2] = x;
			}
		}
		if(nx3 <= 100000) {
			if(!visited[nx3]) {
				visited[nx3] = true;
				q.push({nx3, y+1});
				paths[nx3] = x;
			}
		}
	}
}

void dfs(int a) {
	if(a == n)  {
		cout << a << ' ';
		return ;
	}
	dfs(paths[a]);
	cout << a << ' ';
}

void solve() {
	cout << bfs() << '\n';
	dfs(k);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	 
	return 0;
}
// AM 06:15
