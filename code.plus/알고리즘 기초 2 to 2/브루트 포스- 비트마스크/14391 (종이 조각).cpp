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
		// ���� 
		for(int i = 0; i < n; i++) {
			int col = 0;
			for(int j = 0; j < m; j++) {
				// �ش� ���� ��ġ 
				int cell = i * m + j;
				// 0011 ���� �ش� ���ΰ� {0, 0}, {0,1}�� ���
				// bit�� 0�� �����Ƿ� �� ���� ������. 
				if((width & (1 << cell)) == 0) {
					int num = arr[i][j] - '0';
					col = col * 10 + num;
				}
				// �ش� ���ΰ� {0, 2}�� ��� ���η� �Ǵ�.
				// bit�� 1�� �����Ƿ� ������ ���̶�� �Ǵ���. 
				else {
					sum = sum + col;
					col = 0; 
				}
			}
			// 00000000�� ��� ��� ������.
			// Ȥ�� 0010 �� ��� ���� 0�� ����.
			// 0001�� ��� 1���� col �� 0�� ��.
			sum = sum + col;
		}
		// ���� �̹Ƿ� n, m ��ġ �ٲ���. 
		for(int i = 0; i < m; i++) {
			int row = 0;
			for(int j = 0; j < n; j++) {
				// ���θ� ã���� ���� ��ġ�� ������.
				// ���θ� �������� ���� ��ġ�� ����. 
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
		// �� bit���� ���� ���� ���� �ִ�ġ�� ����. 
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
