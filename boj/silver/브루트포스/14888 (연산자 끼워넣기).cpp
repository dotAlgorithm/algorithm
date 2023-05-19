#include <bits/stdc++.h>

using namespace std;

int n;
int operand[11];
int op[4];
int maxNum = -1e10;
int minNum = 1e10;

void input(){
	cin >> n;
	for(int i = 0; i<n; i++) {
		cin >> operand[i];
	}
	for(int i = 0; i<4; i++) {
		cin >> op[i];
	}
}

int cal(int a, int b, char opCode){
	if(opCode == 0) return a+b;
	if(opCode == 1) return a-b;
	if(opCode == 2) return a*b;
	if(opCode == 3) return a/b;
}
int cnt = 0;
void solve(int k, int num){
	if(k==n) {
		maxNum = max(maxNum, num);
		minNum = min(minNum, num);
		return;
	}
	cnt++;
	for(int i = 0; i<4; i++) {
		if(op[i]) {
			op[i]--;		
			solve(k+1, cal(num, operand[k], i));
			op[i]++;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(1, operand[0]);
	cout << maxNum << "\n" << minNum;
	
	return 0;
}
