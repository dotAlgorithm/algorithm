// acmicpc 18111
// solved.ac Class 2
// authored by jihwankim
// 23-07-27 AM 08 : 53
#include <bits/stdc++.h>

using namespace std;

int n, m, b;
int arr[505][505];
int minH = INT_MAX;
int maxH = 0;

void input() {
	cin >> n >> m >> b;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cin >> arr[i][j];
			minH = min(minH, arr[i][j]);
			maxH = max(maxH, arr[i][j]);
		}
	}
	
}

void solve() {
	int minTime = INT_MAX;
	int height = minH;
	for(int h = minH; h <= maxH; h++) {
		int add = 0;
		int del = 0;
		// ���� ����, ä�� ���� ã��. 
		for(int i = 0; i<n; i++)  {
			for(int j = 0; j<m; j++) {
				int diff = arr[i][j] - h;
				if(diff == 0) continue;
				if(diff < 0) add -= diff;
				else del += diff;
			}
		}
		
		// ä�� ��, �κ��丮 �뷮 Ȯ��
		// ���� ��, �κ��丮�� ä��� ��.
		// add < del + b �� �� �κ��丮 �뷮�� �� �����Ƿ� add����
		// add == del + b �� ��, �� �°� add ����
		// add > del + b �� ��, add�� �� �� ���� 
		if(add > del+b) continue;
		
		// add �� �ð� = 1��, del �� �ð� 2�� 
		// for������ ���̰� ��� ������
		// �ð��� �۰ų� ���� ���� �������� ������Ʈ
		int time = add + (del*2);
		// add �ð��� del �ð����� ���� �� �����Ƿ�
		// �־��� ��� del 256 * 500 * 500 ���� ���� int��
		if(time <= minTime) {
			minTime = time;
			height = h;
		}
	}
	
	cout << minTime << " " << height;
} 

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

/*
1. ���� ���̸� ����.
2. �κ��丮�� ������ Ȯ���Ѵ�. 
3-1. ������ ������ ������ ����� ä���.
3-2. ������ ������ ������ ����� ����. 
*/

// AM 09:47
