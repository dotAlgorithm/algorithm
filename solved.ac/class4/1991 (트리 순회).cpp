#include <bits/stdc++.h>

using namespace std;
char tree[26][3];
string preorder;
string postorder;
string inorder;
int n;

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		char c;
		cin >> c;
		int idx = c-'A';
		tree[idx][0] = c;
		for(int j=1; j<=2; j++) {
			cin >> c;
			tree[idx][j] = c;
		}
	}
}

void order(int h) {
	preorder += tree[h][0];
	if(tree[h][1] != '.') order(tree[h][1]-'A');
	inorder += tree[h][0];
	if(tree[h][2] != '.') order(tree[h][2]-'A');
	postorder += tree[h][0];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();		
	order(0);
	cout << preorder << "\n"
	<< inorder << "\n"
	<< postorder << "\n";
	
	return 0;
}
