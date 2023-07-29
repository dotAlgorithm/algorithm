//acm 20165
//authored by jihwankim
//23-06-06 AM 04:59

#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

int n, m, r;
int arr[101][101];
bool chk[101][101];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

vector<pair<int, int> > attack;
vector<pair<int, int> > defence; 

int arrow[10001];

void input() {
	cin >> n >> m >> r;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cin >> arr[i][j];
		}
	}	
	
	for(int i = 0; i<r; i++) {
		int x, y;
		char c;
		cin >> x >> y >> c;
		attack.push_back({x-1, y-1});
		if(c == 'E') arrow[i] = 2;
		else if(c == 'W') arrow[i] = 3;
		else if(c == 'S') arrow[i] = 0;
		else arrow[i] = 1; 
		
		cin >> x >> y;
		defence.push_back({x-1, y-1});
	}
}

int attacked(pair<int, int> p, int dir) {
	int cnt = 0;
	queue<pair<int, int> > q;
	q.push(p);
	chk[p.x][p.y] = true;
	
	while(!q.empty()) {
		cnt++;
		int x = q.front().x;
		int y = q.front().y; q.pop();
		int size = arr[x][y];
		
		for(int i = 1; i<size; i++){
			x += dx[dir];
			y += dy[dir];
			
			if(x >= n || x < 0) continue;
			if(y >= m || y < 0) continue;
			if(chk[x][y]) continue;
			chk[x][y] = true;
			q.push({x, y});
		}
	}
	return cnt;
}

void solve() {
	int score = 0;
	for(int i = 0; i<r; i++) {
		score += attacked(attack[i], arrow[i]);
		chk[defence[i].x][defence[i].y] = false;
	}	
	
	cout << score << "\n";
	
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			if(chk[i][j]) {
				cout << "F ";
			}
			else cout << "S ";
		}
		cout << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

//AM 05:36
