#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[8][8];
int board[8][8];
int blind;

void input() {
	cin >> n>> m;
	blind = n*m;
	for(int i =0 ; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> arr[i][j];
			if(arr[i][j] != 0) blind-=1;
		}
	}
}

int up(int y, int x) {
	int cnt = 0;
	for(int i = y-1; i>=0; i--) {
		if(arr[i][x] == 6) break;
		else if(arr[i][x]>=1 && arr[i][x] <=5) continue;
		if(arr[i][x] == -1) continue;
		arr[i][x] = -1;
		cnt++;
	}
	return cnt;
}
int down(int y, int x){
	int cnt = 0;
	for(int i = y+1; i<n; i++) {
		if(arr[i][x] == 6) break;
		if(arr[i][x]>=1 && arr[i][x] <=5) continue;
		if(arr[i][x] == -1) continue;
		arr[i][x] = -1;
		cnt++;
	}
	return cnt;
}
int left(int y, int x){
	int cnt = 0;
	for(int i = x-1; i>=0; i--) {
		if(arr[y][i] == 6) break;
		else if(arr[y][i]>=1 && arr[y][i] <=5) continue;
		if(arr[y][i] == -1) continue;
		arr[y][i] = -1;
		cnt++;
	} 
	return cnt;
}
int right(int y, int x) {
	int cnt = 0;
	for(int i = x+1; i<m; i++) {
		if(arr[y][i] == 6) break;
		else if(arr[y][i]>=1 && arr[y][i] <=5) continue;
		if(arr[y][i] == -1) continue;
		arr[y][i] = -1;
		cnt++;
	}
	return cnt; 
}

int cctv(int y, int x, int type) {
	int cnt = 0;
	
	if(type == 1) cnt = up(y, x); 
	else if(type == 2) cnt = down(y, x);
	else if(type == 3) cnt = left(y, x); 
	else cnt = right(y, x);
	
	return cnt;
}

void solve() {
	int addBlind = 0;
	for(int i = 0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(arr[i][j] >=1 && arr[i][j] <=5) {
				addBlind = cctv(i, j, arr[i][j]);
				cout << "i, j = {" <<i << ", " << j <<"}ÀÏ ¶§, " << addBlind << "\n";
			}
		}
	}
	cout << "\n";
	for(int i = 0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	cout << blind - addBlind;
} 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
