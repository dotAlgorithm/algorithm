// acmicpc 1697
// authored by jihwankim
// code.plus
// 23-09-13 AM 05 : 58
#include <bits/stdc++.h>

using namespace std;

int n, k;
bool visited[100005];

void input() {
	cin >> n >> k;
}

void solve() {
	queue<pair<int, int>> q;
	q.push({n, 0});
	visited[n] = true;
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second; q.pop();
		int nx1 = x-1, nx2 = x+1, nx3 = x*2;
		
		if(x == k) {
			cout << y;
			break;
		}
		
		if(nx1 >= 0) {
			if(!visited[nx1]) {
				visited[nx1] = true;
				q.push({nx1, y+1});
			}	
		}
		if(nx2 <= 100000) {
			if(!visited[nx2]) {
				visited[nx2] = true;
				q.push({nx2, y+1}); 
			}
		}
		if(nx3 <= 100000) {
			if(!visited[nx3]) {
				visited[nx3] = true;
				q.push({nx3, y+1});
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
// AM 06:05
