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
		for(int j = 0; j < 9; j++) {¤±// acmicpc 2580
// authored by jihwankim
// code.plus
// 23-09-22 AM 04:01
#include <bits/stdc++.h>

using namespace std;

int arr[9][9];
int cnt;
vector<pair<int, int>> point; 
void input() {
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if(arr[i][j] == 0) point.push_back({i, j});
		}
	}
}

bool find_row(int i, int j) {
	for(int k = 0; k < 9; k++) {
		if(k == i) continue;
		if(arr[k][j] == arr[i][j]) return false;
	}
	return true;
} 

bool find_col(int i, int j) {
	for(int k = 0; k < 9; k++) {
		if(k == j) continue;
		if(arr[i][k] == arr[i][j]) return false;
	}
	return true;
}

bool find_33(int xfrom, int yfrom, int x, int y) {
	for(int i = xfrom; i < xfrom+3; i++) {
		for(int j = yfrom; j < yfrom+3; j++) {
			if(x == i && y == j) continue;
			if(arr[i][j] == arr[x][y]) return false;
		}
	}
	return true;
}

bool solve(int k) {
	if(k == point.size()) return true;
	
	int x = point[k].first;
	int y = point[k].second;
	for(int i = 1; i < 10; i++) {
		arr[x][y] = i;
		if(!find_row(x, y)) continue;
		if(!find_col(x, y)) continue;
		int xfrom = 3 * (x/3); int yfrom = 3 * (y/3);
		if(!find_33(xfrom, yfrom, x, y)) continue;
		
		if(solve(k+1)) return true;
	}
	arr[point[k].first][point[k].second] = 0;

	return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	if(solve(0)) {
		for(int i = 0; i < 9; i++) {
			for(int j = 0; j < 9; j++) {
				cout << arr[i][j] << " ";
			}
			cout << '\n';
		}
	}
	
	return 0;
}
// fail 
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
