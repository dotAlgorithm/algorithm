// acmicpc 14391
// authored by jihwankim
// code.plus
// 23-09-07 AM 03:56

#include <bits/stdc++.h>

using namespace std;

vector<string> arr;
int n, m;
 
void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) {
		string s;
		cin >> s;
		arr.push_back(s);
	}
}

void solve() {
	int max_width = (1 << n*m); 
	int max_sum = 0;
	for(int width = 0; width < max_width; width++) {
		int sum = 0;
		// 가로 
		for(int i = 0; i < n; i++) {
			int col = 0;
			for(int j = 0; j < m; j++) {
				// 해당 셀의 위치 
				int cell = i * m + j;
				// 0011 에서 해당 가로가 {0, 0}, {0,1}일 경우
				// bit가 0이 나오므로 두 값을 합쳐줌. 
				if((width & (1 << cell)) == 0) {
					int num = arr[i][j] - '0';
					col = col * 10 + num;
				}
				// 해당 가로가 {0, 2}일 경우 세로로 판단.
				// bit가 1이 나오므로 가로의 끝이라고 판단함. 
				else {
					sum = sum + col;
					col = 0; 
				}
			}
			// 00000000의 경우 모두 가로임.
			// 혹은 0010 의 경우 남은 0을 생각.
			// 0001의 경우 1에서 col 은 0이 됨.
			sum = sum + col;
		}
		// 세로 이므로 n, m 위치 바꿔줌. 
		for(int i = 0; i < m; i++) {
			int row = 0;
			for(int j = 0; j < n; j++) {
				// 세로를 찾더라도 셀의 위치는 동일함.
				// 가로를 기준으로 셀의 위치를 정함. 
				int cell = j * m + i;
				if((width & (1 << cell)) > 0) {
					int num = arr[j][i] - '0';
					row = row * 10 + num;
				}
				else {
					sum = sum + row;
					row = 0;
				}
			}
			sum = sum + row;
		}
		// 매 bit마다 가로 세로 값의 최대치를 구함. 
		max_sum = max(max_sum, sum);
	} 
	cout << max_sum;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

// fail
