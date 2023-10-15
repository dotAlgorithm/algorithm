// acmicpc 20529
// authored by jihwankim
// solved.ac class3
// 23-10-12 PM 04:49
#include <bits/stdc++.h>

using namespace std;

int n;
vector<string> arr;

void input() {
	arr.clear();
	cin >> n;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		arr.push_back(s);
	}
}

int solve() {
	// n > 32 인 경우, 중복되는게 발생함.
	if(n > 32) return 0;
	int min_dis = 12;
	for(int i = 0; i < n-2; i++) {
		for(int j = i+1; j < n-1; j++) {
			for(int k = j+1; k < n; k++) {
				int dis = 0;
				for(int l = 0; l < 4; l++) {
					if(arr[i][l] != arr[j][l]) dis++;
					if(arr[i][l] != arr[k][l]) dis++;
					if(arr[j][l] != arr[k][l]) dis++;
				}
				min_dis = min(dis, min_dis);
			}
		}
	}
	return min_dis;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	
	while(t--) {
		input();
		cout << solve() << '\n';
	}	
	
	return 0;
}
// PM 05:27
