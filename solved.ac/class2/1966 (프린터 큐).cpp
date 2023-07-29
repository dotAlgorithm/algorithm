//acmicpc 1966
//authored by jihwankim
//23-07-22 AM 06:14

#include <bits/stdc++.h>

using namespace std;

int n, findIdx;
int arr[101];
queue<pair<int, int>> q;

bool cmp(int &a, int &b) {
	return a > b;
}
void input() {
	cin >> n >> findIdx;
	for(int i = 0; i<n; i++) {
		int priority;
		cin >> priority;
		q.push({priority, i});
		arr[i] = priority;
	}
	sort(arr, arr+n, cmp);
}

void solve() {
	for(int i =0 ;i<n; i++) {
		while(arr[i] != q.front().first) {
			q.push(q.front());
			q.pop();
		}
		if(findIdx == q.front().second) {
			cout << i+1 << "\n";
			while(!q.empty()) q.pop();
			break;
		}
		else q.pop();
	}
}

int main() { 
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--) {
		input();
		solve();
	}	
	
	return 0;
} 

//AM 06:50
