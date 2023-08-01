// acmicpc 10971
// authored by jihwankim
// 23-08-01 PM 09:08
// code.plus
#include <bits/stdc++.h>

using namespace std;

int n;
int arr[11][11];
int path[11];
bool chk[11];
int minDis = INT_MAX;

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cin >> arr[i][j];
		}
	}
}

void solve(int k, int w, int next) {
	if(k==n-1 && arr[next][0]) {
		/*
		for(int i =0; i<k; i++) {
			cout << path[i] << " ";
		}
		cout << next << "\n";*/
		minDis = min(minDis, w+arr[next][0]);
		return ;
	}
	for(int i = 0; i<n; i++) {
		if(arr[next][i] == 0) continue;
		if(!chk[i]) {
			chk[next] = true;
		//	path[k] = next;
			solve(k+1, w+arr[next][i], i);
			chk[next] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0, 0, 0);
	cout << minDis;
	
	return 0;
} 
// PM 10:04
