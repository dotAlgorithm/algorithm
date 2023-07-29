#include <bits/stdc++.h>
 
using namespace std;

int n;
int d[505];
int m[505][505];
int p[505][505];
string alpha = {"0ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

void input() {
	cin >> n;
	int r;
	cin >> d[0];
	for(int i = 1; i<n; i++) {
		cin >> r >> d[i];
	}
	cin >> d[n];
}

void order(int i, int j) {
	if(i==j) cout << alpha[i];
	else {
		cout << "(";
		order(i, p[i][j]);
		cout << " x "; 
		order(p[i][j]+1, j);
		cout << ")";
	}
}

int solve() {
	for(int diag = 1; diag <= n-1; diag++) {
		for(int i = 1; i<=n-diag; i++) {
			int j = i + diag;
			m[i][j] = 1e9;
			for(int k = i; k <= j-1; k++) {
				if(m[i][j] > m[i][k] + m[k+1][j] + d[i-1]*d[k]*d[j]) {
					m[i][j] = m[i][k] + m[k+1][j] + d[i-1]*d[k]*d[j];
					p[i][j] = k;
				}
			}
		}
	}
	for(int i = 1; i<=n; i++) {
		for(int j = 1; j<=n; j++) {
			cout << m[i][j] <<" ";
		}
		cout << "\n";
	}
	cout << "\n";
	
	for(int i = 1; i<=n; i++) {
		for(int j = 1; j<=n; j++) {
			cout << p[i][j] <<" ";
		}
		cout << "\n";
	}
	
	order(1, n);
	return m[1][n];
}

int main() {
	input();
	cout << solve();

    return 0;
}

