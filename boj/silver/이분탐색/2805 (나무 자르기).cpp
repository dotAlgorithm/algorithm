#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<int> trees;

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) {
		int tree;
		cin >> tree;
		trees.push_back(tree);
	}
}

bool diff_bound(int h) {
	long long sum = 0;
	for(int i = 0; i<trees.size(); i++) {
		if(trees[i] > h) {
			sum += trees[i] - h;
		}
	}
	return sum >= m;
}

void solve() {
	int s = 0;
	int e = 1e10;
	while(s<=e) {
		int m = (s+e)/2;
		if(!diff_bound(m)) e = m-1;
		else s = m+1;	
	}
	cout << e;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	input();
	solve();
	
	return 0;
}
