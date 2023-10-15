// acmicpc 13460
// authored by jihwankim
// code.plus
// 23-10-30 AM 05:00
#include <bits/stdc++.h>
#define x first
#define y second
#define p pair<int, int>

using namespace std;

int n, m;
char arr[10][10];
p red, blue, escape;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void input() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if(arr[i][j] == 'R') red = {i, j};
			if(arr[i][j] == 'B') blue = {i, j};
			if(arr[i][j] == 'O') escape = {i, j};
		}
	}
}

bool valid(int x, int y) {
	if(arr[x][y] == '#') return false;
	if(arr[x][y] == 'R' || arr[x][y] == 'B') return false;
	return true;
}

void print() {
	cout << "============================\n";
	for(int i =0 ; i<n;i++) {
		for(int j = 0; j<m;j++) {
			cout << arr[i][j];
		}
		cout<<'\n';
	}
}
void move(p &xy, int dir) {
	while(true) {
		int nx = xy.x + dx[dir];
		int ny = xy.y + dy[dir];
		
		if(!valid(nx, ny)) break;
		if(arr[nx][ny] == 'O') break;
		swap(arr[nx][ny], arr[xy.x][xy.y]);
		xy.x = nx; xy.y = ny;
	}
}


int solve(int k, p r, p b, int dir) {
	int ans = 11;
	if(k == 11) return ans;
	p next_red = r;
	p next_blue = b;
	for(int i = 0; i < 4; i++) {
		if(dir == i) continue;
		if(dir == 0 && i == 2) continue;
		if(dir == 2 && i == 0) continue;
		if(dir == 1 && i == 3) continue;
		if(dir == 3 && i == 1) continue;
		if(i == 2 && k == 1) {
			print();
		}
		
		
		move(next_red, i);
		move(next_blue, i);
		move(next_red, i);
		move(next_blue, i);
		
		if(i == 2 && k == 1) {
			print();
		}
		
		if(next_blue.x+dx[i] == escape.x && next_blue.y+dy[i] == escape.y) {
			cout << "OVER\n";
			print();
			swap(arr[next_blue.x][next_blue.y], arr[b.x][b.y]);
			swap(arr[next_red.x][next_red.y], arr[r.x][r.y]);	
			return ans;
		}
		if(next_red.x+dx[i] == escape.x && next_red.y+dy[i] == escape.y) {		
			cout << "CUR " << ", " << k << "\n";
			print();
			swap(arr[next_blue.x][next_blue.y], arr[b.x][b.y]);
			swap(arr[next_red.x][next_red.y], arr[r.x][r.y]);
			return k;
		}
		int cur = solve(k+1, next_red, next_blue, i);
		swap(arr[next_blue.x][next_blue.y], arr[b.x][b.y]);
		swap(arr[next_red.x][next_red.y], arr[r.x][r.y]);	
		next_red = r;
		next_blue = b;
		if(ans > cur) {
			ans = cur;
			cout << "CUR- BACK\n";
			print();
		}
	}	
	
	return ans;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	cout << solve(1, red, blue, -1);
	
	return 0;
}

/*
5 5
#####
#..B#
#.#.#
#R.O#
#####
*/
