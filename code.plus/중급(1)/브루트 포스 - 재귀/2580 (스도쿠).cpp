// acmicpc 2580
// authored by jihwankim
// code.plus
// 23-09-22 AM 04:01
#include <bits/stdc++.h>

using namespace std;

int arr[10][10];
bool row[10][10];
bool col[10][10];
bool grid[10][10];
int cnt;

void input() {
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if(arr[i][j] == 0) continue;
			col[i][arr[i][j]] = true;
			row[j][arr[i][j]] = true;
			grid[3 * (i/3) + (j/3)][arr[i][j]] = true;
		}
	}
}

bool solve(int k) {
	if(k == 81) {
		for(int i = 0; i < 9; i++) {
			for(int j = 0; j < 9; j++) {
				cout << arr[i][j] << ' ';
			}
			cout << '\n';
		}
		return true;
	}
	
	int x = k / 9; 	int y = k % 9;	int square = 3 * (x/3) + (y/3);
	
	if(arr[x][y] != 0) return solve(k+1);
	for(int i = 1; i < 10; i++) {
		if(col[x][i]) continue;
		if(row[y][i]) continue;
		if(grid[square][i]) continue;
		
		col[x][i] = row[y][i] = grid[square][i] = true;
		arr[x][y] = i;
		
		if(solve(k+1)) return true;
		
		col[x][i] = row[y][i] = grid[square][i] = false;
		arr[x][y] = 0;
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0);
	
	return 0;
}
// fail
