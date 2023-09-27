// acmicpc 16197
// authored by jihwankim
// code.plus
// 23-09-20 PM 04:48
#include <bits/stdc++.h>
#define x first
#define y second

#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

int n, m;
int ans = 11;
char arr[20][20];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void input(queue<pair<int, int>> &coin) {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if(arr[i][j] == 'o') coin.push({i, j});
		}
	}
}

bool valid(int x, int y) {
	if(x < 0 || x >= n) return true;
	if(y < 0 || y >= m) return true;
	return false;
}

int solve(queue<pair<int, int>>& coin, int k) {
	if(k > 10) return 11;
	
	auto coin1 = coin.front(); coin.pop();
	auto coin2 = coin.front(); coin.pop();
	for(int i = 0; i < 4; i++) {
		int nx1 = coin1.x + dx[i]; int ny1 = coin1.y + dy[i];
		int nx2 = coin2.x + dx[i]; int ny2 = coin2.y + dy[i];
		bool chk1 = valid(nx1, ny1); bool chk2 = valid(nx2, ny2);
		
		if(chk1 && chk2) continue;
		if(arr[nx1][ny1] == '#' && arr[nx2][ny2] == '#') continue;
		
		if(chk1 || chk2) return k;
		
		if(arr[nx1][ny1] == '#') {
			nx1 = coin1.x;
			ny1 = coin1.y;
		}
		if(arr[nx2][ny2] == '#') {
			nx2 = coin1.x;
			ny2 = coin1.y;
		}
		
		coin.push({nx1, ny1});
		coin.push({nx2, ny2});
		ans = min(ans, solve(coin, k+1));
		
		while(!coin.empty()) coin.pop();
	}
	return ans;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	queue<pair<int, int>> coin;
	input(coin);
	int temp = solve(coin, 1);
	cout << (temp > 10 ? -1 : temp);
	return 0;
}

// PM 05:36
