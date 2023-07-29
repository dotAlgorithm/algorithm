//acm 1018
//authored by jihwankim
//06-14 PM 03:36

#include <bits/stdc++.h>

using namespace std;

int n, m;
int cnt = INT_MAX;
char arr[51][51];

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cin >> arr[i][j];
		}
	}
}

void swap(char &a, char &b) {
	char temp =  a;
	a = b;
	b = temp;
}

void counting(int a, int b) {
	char start1 = 'W';
	char start2 = 'B';
	int cnt1 = 0;
	int cnt2 = 0;
	for(int i = a; i<a+8; i++) {
		swap(start1, start2);
		for(int j = b; j<b+8; j++) {
			if(arr[i][j] == start1) cnt1++;
			else cnt2++;
			swap(start1, start2);
		}
	}
	cnt = min(cnt, min(cnt1, cnt2));
}

void solve() {
	int countingCnt= 0;
	for(int i = 0; i<n-7; i++) {
		for(int j = 0; j<m-7; j++) {
			counting(i, j);
			countingCnt++;
		}
	}
	cout << cnt;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

// PM 03:52
