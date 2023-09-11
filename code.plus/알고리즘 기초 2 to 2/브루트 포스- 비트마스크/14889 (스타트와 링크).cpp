// acmicpc 14889
// authored by jihwankim
// code.plus
// 23-09-06 AM 05:56
#include <bits/stdc++.h>

using namespace std;

int n;
int arr[25][25];

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cin >> arr[i][j];
		}
	}
}

void solve() {
	int total_score = INT_MAX;
	
	for(int k = 0; k<(1<<n); k++) {
		vector<int> start, link;
		for(int i = 0; i<n; i++) {
			if(k&(1<<i)) start.push_back(i);
			else link.push_back(i);
		}
		if(start.size() != n/2) continue;
		
		int start_score = 0;
		int link_score = 0;
		
		for(int i = 0; i<start.size(); i++) {
			for(int j = 0; j<start.size(); j++) {
				if(i == j) continue;
				start_score += arr[start[i]][start[j]];
				link_score += arr[link[i]][link[j]];
			}
		}
		
		total_score = min(total_score, abs(start_score-link_score));
	}
	
	cout << total_score;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// AM 06:07
