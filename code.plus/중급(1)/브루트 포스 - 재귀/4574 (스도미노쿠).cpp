// acmicpc 4574
// authored by jihwankim
// code.plus
// 23-09-26 PM 03:05
#include <bits/stdc++.h>

using namespace std;

int arr[10][10];
bool row[10][10];
bool col[10][10];
bool grid[10][10];
bool domino[10][10];
int cnt = 1;
int n;

void back(int x, int y, int z, bool tf) {
	col[x][z] = tf;
	row[y][z] = tf;
	grid[3*(x/3)+(y/3)][z] = tf;
}

int input() {
	cin >> n;
	if(n == 0) return n;
	
    memset(row,false,sizeof(row));
    memset(col,false,sizeof(col));
    memset(grid,false,sizeof(grid));
    memset(domino,false,sizeof(domino));
    memset(arr,0,sizeof(arr));
	int v1, v2;
	string position, position1, position2;
	for(int i = 0; i < n; i++) {
		cin >> v1 >> position1 >> v2 >> position2;
		int x1, x2, y1, y2;
		tie(x1, y1) = make_pair(position1[0]-'A', position1[1]-'1');
		tie(x2, y2) = make_pair(position2[0]-'A', position2[1]-'1');
		arr[x1][y1] = v1;
		arr[x2][y2] = v2;
		domino[v1][v2] = domino[v2][v1] = true;
		back(x1, y1, v1, true);
		back(x2, y2, v2, true);
	}
	for(int i = 1; i <= 9; i++) {
		cin >> position;
		int x, y;
		tie(x, y) = make_pair(position[0]-'A', position[1]-'1');
		arr[x][y] = i;
		back(x, y, i, true);
	}
	return cnt++;
}

int dx[] = {1, 0};
int dy[] = {0, 1};

bool chk(int x, int y, int z) {
	if(col[x][z]) return true;
	if(row[y][z]) return true;
	if(grid[3*(x/3)+(y/3)][z]) return true;
	return false;
}

bool solve(int k) {
	if(k == 81) {
		for(int i = 0; i < 9; i++) {
			for(int j = 0; j < 9; j++) {
				cout << arr[i][j];
			}
			cout << '\n';
		}
		return true;
	}
	
	int x = k / 9; int y = k % 9;
	if(arr[x][y] != 0) return solve(k+1);
	
	for(int k = 0; k < 2; k++) {
		int nx = x + dx[k];
		int ny = y + dy[k];
		if(nx >= 9 || ny >= 9) continue;	
		if(arr[nx][ny] != 0) continue;
		for(int i = 1; i <= 9; i++) {
			for(int j = 1; j <= 9; j++) {
				if(i == j) continue;
				if(domino[i][j]) continue;
				if(chk(x, y, i)) continue;
				if(chk(nx, ny, j)) continue;
				
				domino[i][j] = domino[j][i] = true;
				back(x, y, i, true);
				back(nx, ny, j, true);
				arr[x][y] = i;
				arr[nx][ny] = j;
				
				if(solve(k+1)) return true;
				
				domino[i][j] = domino[j][i] = false;
				back(x, y, i, false);
				back(nx, ny, j, false);
				arr[x][y] = 0;
				arr[nx][ny] = 0;
			}
		}
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int chk;
	while(chk = input()) {
		cout << "Puzzle " << chk << '\n';
		solve(0);
	}
	
	return 0;
}
// PM 04:46
