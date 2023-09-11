// acmicpc 9019
// authored by jihwankim
// 23-08-05 PM 04:44
// solved.ac Class3
#include <bits/stdc++.h>

using namespace std;

int n;
int a, b;
bool visited[10001];

int D(int x) {
	return (x*2)%10000;
}

int S(int x) {
	if(x == 0) return 9999;
	return x-1;
}
int L(int x) {
	return (x%1000) * 10 + (x/1000);
}

int R(int x) {
	return x/10 + (x%10) * 1000;
}

// 1일 경우 -> 1000이 되는거였음 ;;; 
void bfs() {
	queue<pair<int, string>> q;
	string str;
	q.push({a, str});
	
	while(!q.empty()) {
		int v = q.front().first;
		if(v == b) {
			cout << q.front().second << "\n";
			return ;
		}
		str = q.front().second;
		q.pop();
		
		int d = D(v);
		if(!visited[d]) {
			visited[d] = true;
			q.push({d, str+"D"});
		}
	
		int s = S(v);
		if(!visited[s])	{
			visited[s] = true;
			q.push({s, str+"S"});	
		}
		
		int l = L(v);
		if(!visited[l]) {
			visited[l] = true;
			q.push({l, str+"L"});	
		}
		
		int r = R(v);
		if(!visited[r]) {
			visited[r] = true;
			q.push({r, str+"R"});	
		}
	}
}

void solve() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<10000; j++) visited[j] = false;
		cin >> a >> b;
		bfs();
	}	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	solve();
	cout << L(1) << "\n";
	cout << R(1); 
		
	return 0;
}
// PM 05:50
