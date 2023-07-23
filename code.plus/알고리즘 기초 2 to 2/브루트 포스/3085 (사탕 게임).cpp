// acmicpc 3085
// authored by jihwankim
// code.plus
// 23-07-24 AM 06:08
#include <iostream>
#include <algorithm>

using namespace std;

int n;

int readCnt(vector<string> &arr, int y, int ye, int x, int xe) {
	char c;
	int cnt;
	int maxCnt = 0;
	
	//readCol
	for(int i = y; i<=ye; i++) {
		c = arr[i][0]; cnt = 0;
		for(int j = 0; j<n; j++) {
			if(arr[i][j] != c) {
				maxCnt = max(maxCnt, cnt);
				c = arr[i][j];
				cnt = 0;
			}
			if(arr[i][j] == c) cnt++;
		}
		maxCnt = max(maxCnt, cnt);
		
	}
	//readRow
	for(int i = x; i<=xe; i++) {
		c = arr[0][i]; cnt = 0;
		for(int j = 0; j<n; j++) {
			if(arr[j][i] != c) {
				maxCnt = max(maxCnt, cnt);
				c = arr[j][i];
				cnt = 0;
			}
			if(arr[j][i] == c) cnt++;
		}
		maxCnt = max(maxCnt, cnt);
		
	}
		
	return maxCnt;
}

int initRead(vector<string> &arr) {
	char c; int cnt;
	int maxCnt = 0;
	
	for(int i = 0; i<n; i++) {
		//readCol
		c = arr[i][0]; cnt = 0;
		for(int j = 0; j<n; j++) {
			if(arr[i][j] != c) {
				maxCnt = max(maxCnt, cnt);
				c = arr[i][j];
				cnt = 0;
			}
			if(arr[i][j] == c) cnt++;
		}
		maxCnt = max(maxCnt, cnt);
		c = arr[i][0]; cnt = 0;
		
		//readRow
		for(int j = 0; j<n; j++) {
			if(arr[j][i] != c) {
				maxCnt = max(maxCnt, cnt);
				c = arr[j][i];
				cnt = 0;
			}
			if(arr[j][i] == c) cnt++;
		}
		maxCnt = max(maxCnt, cnt);
	}
	return maxCnt;
}

void solve(vector<string> &arr) {
	int maxCnt = initRead(arr);
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			if(i+1 < n) {
				if(arr[i][j] != arr[i+1][j]) {
					swap(arr[i][j], arr[i+1][j]);
					maxCnt = max(maxCnt, readCnt(arr, i, i+1, j, j));
					swap(arr[i][j], arr[i+1][j]);
				}
			}
			
			if(j+1 < n) {
				if(arr[i][j] != arr[i][j+1]) {
					swap(arr[i][j], arr[i][j+1]);
					maxCnt = max(maxCnt, readCnt(arr, i, i, j, j+1));
					swap(arr[i][j], arr[i][j+1]);
				}
			}
		}
	}
	cout << maxCnt;
}

vector<string> input() {
	cin >> n;
	vector<string> s(n);
	for(int i = 0; i<n; i++) {
		cin >> s[i];
	}
	return s;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	vector<string> s = input();
	solve(s);
	
	return 0;
}

// AM 06:34
