#include <bits/stdc++.h>

using namespace std;

int n, m;
<<<<<<< HEAD

=======
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3
vector<int> tree[501];
bool visited[501];

bool input() {
<<<<<<< HEAD
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
	
=======
	for(int i = 1; i<=n; i++) {
		tree[i].clear();
		visited[i] = false;
	}
	cin >> n >> m;
	for(int i = 0; i<m; i++) {
		int a, b;
		cin >> a >> b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	return (n+m) > 0;
}

bool dfs(int x, int parent) {
	//cout << x << " - ";
	for(int i = 0; i<tree[x].size(); i++) {
		if(parent == tree[x][i]) continue;
	//	cout << tree[x][i] << ", ";
		if(visited[tree[x][i]]) return false;
		visited[tree[x][i]] = true;
		if(!dfs(tree[x][i], x)) return false;
	}
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3
	return true;
}

void solve() {
<<<<<<< HEAD
	for(int i = 1; i<=n; i++) visited[i] = false;
	int cnt = 0;
	for(int i = 1; i<=n; i++) if(dfs(i)) cnt++;	

	if(cnt == 0) cout << "No trees.\n";
	else if(cnt == 1) cout << "There is one tree.\n";
	else cout << "A forest of "<< cnt << " trees.\n";
=======
	int tc = 0;
	while(input() && ++tc) {
		int cnt = 0;
		for(int i = 1; i<=n; i++) {
			visited[i] = true;
			if(dfs(i, 0)) cnt++;
			//cout << "\n";
		}
		cout << "Case " << tc << ": ";
		if(cnt == 0) cout << "No trees.\n";
		if(cnt == 1) cout << "There is one tree.\n";
		if(cnt > 1) cout << "A forest of " << cnt << " trees.\n";
	}
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3
}

int main() {
	ios_base::sync_with_stdio(0);
<<<<<<< HEAD
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
=======
	cin.tie(NULL);
	
	//freopen("../../../Input.txt", "rt", stdin);
	
	solve();
	
	return 0;
}
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3
