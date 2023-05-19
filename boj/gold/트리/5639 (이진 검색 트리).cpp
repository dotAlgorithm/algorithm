#include <bits/stdc++.h>

using namespace std;

int tree[1000001][2];
bool visited[1000001];
int root;
vector<int> node;

void input() {
	int a;
	while(cin >> a) {
		if(cin.eof()) break;
		node.push_back(a);		
	}
}

void bts(int x) {
	if(root == 0) {
		root = x;
		return;
	}
	
	int parent = root;
	int child=0;
	
	while(parent != x) {
		if(parent<x) {
			child = tree[parent][1];	
			if(child == 0) tree[parent][1] = x;
			else parent = child;
		}
		else {
			child = tree[parent][0];	
			if(child == 0) tree[parent][0] = x;
			else parent = child;
		}	
	} 
	
}

void postorder(int v) {
	if(v <= 0) return;
	if(v >= 100000) return;
	postorder(tree[v][0]);
	postorder(tree[v][1]); 
	cout << v <<"\n";
}

void solve() {
	for(int i = 0; i<node.size(); i++) {
		bts(node[i]);
	} 
	postorder(root);
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();

	solve();
	
	
	return 0;
}
