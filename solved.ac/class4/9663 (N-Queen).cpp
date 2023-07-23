#include <bits/stdc++.h>

using namespace std;

int n;
int col[15];
int ans;

bool promising(int row) {
	for(int i = 0; i<row; i++) {
		bool colRow =
		(col[i] == col[row]) ? true : false;
		bool diag = 
		(abs(row-i) == abs(col[row]-col[i])) ? true : false;
		if(colRow || diag) return false;
 	}
 	return true;
}

void rec(int row) {
	if(row==n) {
		ans++; 
		return;
	}
	for(int i = 0; i<n; i++) {
		col[row] = i;
		if(promising(row)) rec(row+1);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n;
	rec(0);
	cout << ans;
	
	return 0;
}
