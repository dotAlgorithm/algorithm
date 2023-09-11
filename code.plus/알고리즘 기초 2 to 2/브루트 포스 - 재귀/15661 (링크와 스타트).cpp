// acmicpc 15661
// authored by jihwankim
// code.plus
// 23-08-10 AM 08:54
#include <bits/stdc++.h>

using namespace std;

int n;
int arr[25][25];
vector<int> start, link;
int diff = INT_MAX;

void input() {
	cin >> n;
	for(int i =0 ; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cin >> arr[i][j];
		}
	}
}

void solve(int k) {
	if(k == n) {
		if(link.size() == 0) return;
		if(start.size() == 0) return;
		int linkTeam = 0;
		int startTeam = 0;
		for(int i = 0; i<link.size(); i++) {
			for(int j = 0; j<link.size(); j++) {
				linkTeam += arr[link[i]][link[j]];
			}
		}
		for(int i = 0; i<start.size(); i++) {
			for(int j = 0; j<start.size(); j++) {
				startTeam += arr[start[i]][start[j]];
			}
		} 
		diff = min(diff, abs(linkTeam-startTeam));
		return;
	}	
	
	link.push_back(k);
	solve(k+1);
	link.pop_back();

	start.push_back(k);
	solve(k+1);
	start.pop_back();
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0);
	cout << diff;
	
	return 0;
}
// AM 09:17
