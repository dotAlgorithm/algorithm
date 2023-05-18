#include <bits/stdc++.h>

using namespace std;

int n;
int tree[10001][2];
bool parent[10001];
int root;
int width = 0;
vector<int> height[21];

void input() {
	cin >> n;
	for(int i=0; i<n; i++) {
		int vertex;
		cin >> vertex;
		cin >> tree[vertex][0] >> tree[vertex][1];
		parent[tree[vertex][0]] = true;
		parent[tree[vertex][1]] = true;
	}
}
void inOrder(int x, int h) {
	if(x == -1) return;
	int left = tree[x][0];
	int right = tree[x][1];
	inOrder(left, h+1);
	height[h].push_back(++width);
	//cout << x << "는 " << h << "레벨에 " << width <<"너비\n"; 
	inOrder(right, h+1);
}
int find_Parent() {
	for(int i = 1; i<=n; i++) {
		if(!parent[i]) return i;
	}
}
void solve() {
	inOrder(find_Parent(), 1);
	int maxW = 0;
	int level;
	for(int i = 1; i<=20; i++) {
		cout << i << "일 때, " << height[i].size() << "\n";
		if(height[i].size() == 0) continue;
		int w = height[i][height[i].size()-1] - height[i][0] + 1;
		if(w > maxW) {
			maxW = w;
			level = i;
		}
	}
	cout << level << " " << maxW;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	return 0;
}
