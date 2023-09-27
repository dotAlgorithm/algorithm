// acmicpc 14888
// authroed by jihwankim
// code.plus
// 23-09-18 AM 02:46
#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> arr;
int op[4];

void input() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr.push_back(a);
	}
	for(int i = 0; i < 4; i++) {
		cin >> op[i];
	}
}

void solve() {
	int max_sum = INT_MAX+1;
	int min_sum = INT_MAX;
	vector<int> seq;
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < op[i]; j++) seq.push_back(i);
	}
	
	do{
		int sum = arr[0];
		int idx = 1;
		for(int &i : seq) {
			if(i == 0) sum += arr[idx++];
			else if(i == 1) sum -= arr[idx++];
			else if(i == 2) sum *= arr[idx++];
			else sum /= arr[idx++];
		}
		max_sum = max(max_sum, sum);
		min_sum = min(min_sum, sum);
	} while(next_permutation(seq.begin(), seq.end()));
	
	cout << max_sum << '\n' << min_sum;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// AM 03:12
