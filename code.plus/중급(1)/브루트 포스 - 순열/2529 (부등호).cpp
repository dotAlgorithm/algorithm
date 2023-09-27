// acmicpc 2529
// authored by jihwankim
// code.plus
// 23-09-15 AM 01:52
#include <bits/stdc++.h>

using namespace std;

int n;
char arr[10];

void input() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

bool chk(vector<int> &permutation) {
	for(int i = 0; i < n; i++) {
		if(arr[i] == '<' && permutation[i] > permutation[i+1]) return false;
		if(arr[i] == '>' && permutation[i] < permutation[i+1]) return false;
	}
	return true;
}

void solve() {
	vector<int> desc;
	vector<int> asc;
	for(int i = 0; i <= n; i++) {
		desc.push_back(9-i);
		asc.push_back(i);
	} 
	while(!chk(asc)) {
		next_permutation(asc.begin(), asc.end());
	}
	while(!chk(desc)) {
		prev_permutation(desc.begin(), desc.end());
	}
	
	for(int &x : desc) cout << x;
	cout << '\n';
	for(int &x : asc) cout << x;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

/*
k���� �ε�ȣ�� ���ϱ� k+1���� ��� ������ ����.
2^(k+1) * (k+1) * (k+1) = 300�� �ð��ʰ�
 
*/

// AM 02:02
