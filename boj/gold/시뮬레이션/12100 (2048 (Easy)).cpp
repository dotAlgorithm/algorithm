// acm 12100
// authored by jihwankim
// AM 03:14
#include <bits/stdc++.h>

using namespace std;

int n;
int arr[25][25];
int maxCnt = 2;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cin >> arr[i][j];
		}
	}
}

bool valid(int x, int y){
	if(x<0 || x>=n) return false;
	if(y<0 || y>=n) return false;
	return true;
}

//��,��,��,�� �̵� �Լ� ���� 
void down(int board[25][25], int dir) {
	// n-j-1���� n-j�� ������ ���ϱ�ȭ 
	// ������ ���, n-j-1���� ���ϸ� �ȵǴϱ� j-- 
	for(int i = 0; i < n; i++) {
		for(int j = n-1; j >= 0; j--) {
			int nx = j+dx[dir];
			int ny = i+dy[dir];
			while(valid(nx, ny) && board[nx][ny] == 0) {
				nx += dx[dir];
				ny += dy[dir];
			}
			if(board[nx][ny] != board[j][i]) continue;
			board[nx][ny] += board[j][i];
			board[j][i] = 0;
			j--;
		}
	}
	
	// 0�� �ƴ� index�� ��������
	// ���� ���� 0�� �ƴϸ� 
	// index + 1 ��°�� �� ���� �� �ʱ� 
	for(int i = 0; i<n; i++) {
		int idx = n-1;
		for(int j = n-1; j>=0; j--) {
			if(board[j][i] != 0) {
				int temp = board[j][i];
				board[j][i] = 0;
				board[idx][i] = temp;
				idx--;
			}
		}
	}
}

void left(int board[25][25], int dir) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j<n; j++) {
			int nx = i+dx[dir];
			int ny = j+dy[dir];
			while(valid(nx, ny) && board[nx][ny] == 0) {
				nx += dx[dir];
				ny += dy[dir];
			}
			if(board[nx][ny] != board[i][j]) continue;
			board[nx][ny] += board[i][j];
			board[i][j] = 0;
			j++;
		}
	}
	
	for(int i = 0; i<n; i++) {
		int idx = 0;
		for(int j = 0; j<n; j++) {
			if(board[i][j] != 0) {
				int temp = board[i][j];
				board[i][j] = 0;
				board[i][idx] = temp;
				idx++;
			}
		}
	}
}

void up(int board[25][25], int dir) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j<n; j++) {
			int nx = j+dx[dir];
			int ny = i+dy[dir];
			while(valid(nx, ny) && board[nx][ny] == 0) {
				nx += dx[dir];
				ny += dy[dir];
			}
			if(board[nx][ny] != board[j][i]) continue;
			board[nx][ny] += board[j][i];
			board[j][i] = 0;
			j++;
		}
	}
	
	for(int i = 0; i<n; i++) {
		int idx = 0;
		for(int j = 0; j<n; j++) {
			if(board[j][i] != 0) {
				int temp = board[j][i];
				board[j][i] = 0;
				board[idx][i] = temp;
				idx++;
			}
		}
	}
}

void right(int board[25][25], int dir) {
	for(int i = 0; i < n; i++) {
		for(int j = n-1; j>=0; j--) {
			int nx = i+dx[dir];
			int ny = j+dy[dir];
			while(valid(nx, ny) && board[nx][ny] == 0) {
				nx += dx[dir];
				ny += dy[dir];
			}
			if(board[nx][ny] != board[i][j]) continue;
			board[nx][ny] += board[i][j];
			board[i][j] = 0;
			j--;
		}
	}
	
	for(int i = 0; i<n; i++) {
		int idx = n-1;
		for(int j = n-1; j>=0; j--) {
			if(board[i][j] != 0) {
				int temp = board[i][j];
				board[i][j] = 0;
				board[i][idx] = temp;
				idx--;
			}
		}
	}
}

void copy(int arr1[25][25], int arr2[25][25]) {
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			arr1[i][j] = arr2[i][j];
		}
	}
	
}

void solve(int board[25][25], int cnt) {
	if(cnt == 5) {
		for(int i = 0; i<n; i++) {
			for(int j = 0; j<n; j++) {
				maxCnt = max(maxCnt, board[i][j]);
			}
		}
		return ;
	}
	
	int nboard[25][25];
	
	// 2048 ���� �� ���̺� ����
	copy(nboard, board);
	
	for(int dir = 0; dir<4; dir++) {
		// ���Ʈ���� 
		if(dir == 0) {
			down(board, dir);
			solve(board, cnt+1);
			copy(board, nboard);
		}
		if(dir == 1) {
			up(board, dir);
			solve(board, cnt+1);
			copy(board, nboard);
		}
		if(dir == 2) {
			right(board, dir);
			solve(board, cnt+1);
			copy(board, nboard);
		}
		if(dir == 3) {
			left(board, dir);
			solve(board, cnt+1);
			copy(board, nboard);	
		}
	}
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	input();
	solve(arr, 0);
	cout << maxCnt;
	
	return 0;
}

// AM 5:20
