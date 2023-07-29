#include <bits/stdc++.h>

using namespace std;

int n;
int p[5] = {0, 3, 3, 1, 1};
int key[5] = {0, 10, 20, 30, 40};
int a[501][501];
int r[501][501];

void backtrack(int i, int j) {
    if (i > j) return;
    int root = r[i][j];
    cout << "Root: " << key[root] << "\n";
    backtrack(i, root - 1);
    backtrack(root + 1, j);
}


int solve() {
	for(int i = 1; i<=4; i++) {
		a[i][i] = p[i];
		r[i][i] = i;
	}
	
	for(int diag = 1; diag<=3; diag++) {
		for(int i = 1; i<=4-diag; i++) {
			int j = i+diag;
			int sum = 0;
			a[i][j] = INT_MAX;
			for(int k = i; k<=j; k++) sum+=p[k];
			for(int k = i; k<=j; k++) {
				if(a[i][j] > a[i][k-1] + a[k+1][j]) {
					a[i][j] = a[i][k-1] + a[k+1][j];
					r[i][j] = k;
				}
			} 
			a[i][j] += sum;
		}
	}
	for(int i = 1; i<=4; i++) {
		for(int j = 0; j<=4; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	
	for(int i = 1; i<=4; i++) {
		for(int j = 0; j<=4; j++) {
			cout << r[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "Optimal BST root sequence:\n";
    backtrack(1, 4);
    
	return a[1][4];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cout << solve();
	
	return 0;
}
