// acmicpc 16928
// authored by jihwankim
// solved.ac Class3
// 23-08-06 AM 12:02
#include <bits/stdc++.h>

using namespace std;
bool visited[105];
bool chk[105];
int ladder[105];
int snake[105];
int n, m;
 
void input() {
	cin >> n >> m;
	int a, b;
	for(int i = 0; i<n; i++) {
		cin >> a >> b;
		ladder[a] = b;
		chk[a] = true;
	}	
	for(int i = 0; i<m; i++) {
		cin >> a >> b;
		snake[a] = b;
		chk[a] = true;
	}
}

void solve() {
	queue<pair<int, int>> q;
	q.push({1, 0});
	visited[1] = true;
	
	while(!q.empty()) {
		int v = q.front().first;
		int cnt = q.front().second; q.pop();
		
		if(v == 100) {
			cout << cnt;
			return ;
		}
		
		for(int i = 1; i<=6; i++) {
			int x = v+i;
			if(x > 100) continue;
			if(visited[x]) continue;
			if(chk[x]) {
				visited[x] = true;
				if(snake[x] != 0) x = snake[x];
				if(ladder[x] != 0) x = ladder[x];
			}
			q.push({x, cnt+1});
			visited[x] = true;
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
// AM 12:13
