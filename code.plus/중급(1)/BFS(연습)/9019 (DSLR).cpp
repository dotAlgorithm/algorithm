// acmicpc 9019
// authored by jihwankim
// code.plus
// 23-09-27 PM 04:29
#include <bits/stdc++.h>

using namespace std;

int a, b;
bool visited[10001];

void solve() {
	queue<pair<int, string>> q;
	q.push({a, ""});
	visited[a] = true;
	
	while(!q.empty()) {
		int x = q.front().first;
		string command = q.front().second; q.pop();
		
		if(x == b) {
			cout << command << '\n';
			return;
		}
		
		int d = (2 * x) % 10000;
		if(!visited[d]) {
			q.push({d, command+"D"});
			visited[d] = true;
		}
		
		int s = x-1;
		if(x == 0) s = 9999;
		if(!visited[s]) {
			q.push({s, command+"S"});
			visited[s] = true;
		}
		
		int l = (x%1000)*10 + x/1000;
		if(!visited[l]) {
			q.push({l, command+"L"});
			visited[l] = true;
		}
		
		int r = x/10 + (x%10)*1000;
		if(!visited[r]) {
			q.push({r, command+"R"});
			visited[r] = true;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		memset(visited, false, sizeof(visited));
		cin >> a >> b;
		solve();	
	}
	
	return 0;
}
// PM 04:51
