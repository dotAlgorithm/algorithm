// acmicpc 14889
// authored by jihwankim
// code.plus 
// 23-08-10 AM 05:34

#include <bits/stdc++.h>

using namespace std;

int n;
int arr[25][25];
vector<int> start, link;
int diff = INT_MAX;

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cin >> arr[i][j];
		}
	}
}

void solve(int k) {
	if(k == n) {
		if(start.size() > n/2) return;
		if(link.size() > n/2) return;
		
		int startTeam = 0;
		int linkTeam = 0;
		
		for(int i = 0; i<start.size(); i++) {
			for(int j = 0; j<start.size(); j++) {
				startTeam += arr[start[i]][start[j]];
				linkTeam += arr[link[i]][link[j]];
			}
		}
		
		diff = min(diff, abs(startTeam-linkTeam));
		return ;
	}
	start.push_back(k);
	solve(k+1);
	start.pop_back();
	
	link.push_back(k);
	solve(k+1);
	link.pop_back();
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0);
	cout << diff;
	
	return 0;
}
