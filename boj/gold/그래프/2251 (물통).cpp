#include <bits/stdc++.h>

using namespace std;

int A, B, C;
bool visited[201][201][201];
vector<int> v;

void input() {
	cin >> A >> B>> C;
}

void solve(int a, int b, int c) {
	if(visited[a][b][c]) return;
	visited[a][b][c] = true;
	if(a==0) {
		v.push_back(c);	
	}
	
	if(c) {
		if(A>c+a) solve(c+a, b, 0);
		else solve(A, b, c+a-A);
		if(B>c+b) solve(a, c+b, 0);
		else solve(a, B, c+b-B);
	}
	if(b) {
		if(A>b+a) solve(a+b, 0, c);
		else solve(A, a+b-A, c);
		if(C>b+c) solve(a, 0, c+b);
		else solve(a, c+b-C, C);
	}
	if(a) {
		if(C>a+c) solve(0, b, a+c);
		else solve(a+c-C, b, C);
		if(B>a+b) solve(0, a+b, c);
		else solve(a+b-B, B, c);
	}
}

void print() {
	sort(v.begin(), v.end());
	for(int i = 0; i<v.size(); i++) {
		cout << v[i] << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0,0,C);
	print();
	
	
	return 0;
}
