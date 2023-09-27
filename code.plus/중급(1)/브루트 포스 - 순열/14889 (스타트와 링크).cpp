// acmicpc 14889
// authored by jihwankim
// code.plus
// 23-09-18 AM 03:34
#include <bits/stdc++.h>

using namespace std;

int n;
int arr[25][25];

void input() {
	cin >> n;
	for(int i = 0; i< n; i++) {
		for(int j = 0; j< n; j++) {
			cin >> arr[i][j];
		}
	}
}

void solve() {
	vector<int> seq(n, 0);
	for(int i = n/2; i < n; i++) seq[i] = 1;
	
	int diff = INT_MAX;
	do {
		vector<int> start, link;
		for(int i = 0; i < n; i++) {
			if(seq[i]) start.push_back(i);
			else link.push_back(i);
		}
		int start_score = 0;
		int link_score = 0;
		for(int i = 0; i<start.size(); i++) {
			for(int j = 0; j<start.size(); j++) {
				start_score += arr[start[i]][start[j]];
				link_score += arr[link[i]][link[j]];
			}
		}		
		diff = min(abs(start_score-link_score), diff);
	}
	while(next_permutation(seq.begin(), seq.end()));
	cout << diff;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// AM 03:47 
