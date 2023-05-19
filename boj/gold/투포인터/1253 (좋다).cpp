#include <bits/stdc++.h>

using namespace std;

int n, arr[2001];

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) cin >> arr[i];
	sort(arr, arr+n);
}

bool finds(int key) {
	int l = 0; int r = n-1;
	while(l<r) {
		if(l == key) l++;
		else if(r==key) r--;
		else {
			if(arr[l]+arr[r] == arr[key]) return true;	
			else if(arr[l]+arr[r] > arr[key]) r--;
			else l++;
		}
	}
	return false;
}

void solve() {
	int cnt = 0;
	for(int i = 0; i<n; i++) {
		if(finds(i)) cnt++;
	}
	cout << cnt;
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
