#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<int> tree[501];
bool visited[501];

bool input() {
	cin >> n >> m;
	if(n==0 && m==0) return false;
	for(int i = 1; i<=n; i++) {
		tree[i].clear();
		visited[i] = false;	
	}
	for(int i=0; i<m; i++) {
		int a, b;
		cin >> a >> b;
		tree[a].push_back(b);
	}
	return true;
}

bool bfs(int x) {
	queue<int> q;
	if(visited[x]) return false;
	
	q.push(x);
	visited[x] = true;
	
	while(!q.empty()) {
		int u = q.front(); q.pop();
		for(int i = 0; i<tree[u].size(); i++) {
			int v = tree[u][i];
			if(visited[v]) return false;
			visited[v] = true;
			q.push(v);
		}
	}
	
	return true;
}

void solve(int tc) {
	int cnt = 0;
	for(int i = 1; i<=n; i++) if(bfs(i)) cnt++;

	if(cnt == 0) cout << "Case " << tc << ": No trees.\n";
	else if(cnt == 1) cout << "Case " << tc << ": There is one tree.\n";
	else cout << "Case " << tc << ": A forest of "<< cnt << " trees.\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	
	int tc = 0;
	while(input()) solve(++tc);
	
	return 0;
}

/* dfs
#include <bits/stdc++.h>

using namespace std;

int n, m, tc;

vector<int> tree[501];
bool visited[501];

bool input() {
	cin >> n >> m;
	for(int i = 1; i<=n; i++) tree[i].clear();
	for(int i=0; i<m; i++) {
		int a, b;
		cin >> a >> b;
		tree[a].push_back(b);
	}
}

bool dfs(int x) {
	if(visited[x]) return false;
	
	visited[x] = true;
	
	for(int i = 0; i<tree[x].size(); i++) {
		int v = tree[x][i];
		if(visited[v]) return false;
		if(!dfs(v)) return false;
	}
	
	return true;
}

void solve() {
	for(int i = 1; i<=n; i++) visited[i] = false;
	int cnt = 0;
	for(int i = 1; i<=n; i++) if(dfs(i)) cnt++;	

	if(cnt == 0) cout << "No trees.\n";
	else if(cnt == 1) cout << "There is one tree.\n";
	else cout << "A forest of "<< cnt << " trees.\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	
	while(++tc) {
		input();
		if(n==0 && m==0) return false;
		cout << "Case " << tc << ": ";
		solve();	
	}
	
	return 0;
}
*/
