// acmicpc 1248
// authored by jihwankim
// code.plus
// 23-09-07 AM 02:35

#include <bits/stdc++.h>

using namespace std;

string s;
int arr[15][15];
int num[15];
int n;
bool vis;

void input() {
	cin >> n >> s;
	int pointer = 0;
	for(int i = 0; i<n; i++) {
		for(int j = i; j<n; j++) {
			if(s[pointer] == '0') arr[i][j] = 0;
			else if(s[pointer] == '+') arr[i][j] = 1;
			else arr[i][j] = -1;
			pointer++;			 
		}
	}
}

bool chk(int k) {
	int sum = 0;
	for(int i = k; i>=0; i--) {
		sum += num[i];
		if(arr[i][k] == 0 && sum != 0) return false;
		if(arr[i][k] > 0 && sum <= 0) return false;
		if(arr[i][k] < 0 && sum >= 0) return false;
	}
	return true;
}

void solve(int k) {
	if(k == n) {
		vis = true;
		for(int i = 0; i<k; i++) cout << num[i] << " ";
		return;
	}
	
	if(arr[k][k] == 0) {
		num[k] = 0;
		if(chk(k) && !vis) solve(k+1);
	}
	else {
		for(int i = 1; i<=10; i++) {
			num[k] = i * arr[k][k];
			if(chk(k) && !vis) solve(k+1);	
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0);
	
	return 0;
}

// AM 04:01
