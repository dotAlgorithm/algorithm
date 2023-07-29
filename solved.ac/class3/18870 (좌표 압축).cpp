// acmicpc 18870
// authored by jihwankim
// 23-07-29 PM03:21
// solved.ac Class3
#include <bits/stdc++.h>

using namespace std;

int n;
int arr[1000001];
set<int> s;

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		cin >> arr[i];
		s.insert(arr[i]);
	}	
}

int lower_bounds(vector<int> &v, int s, int e, int key) {
	int num = e-1;
	while(s<=e) {
		int mid = (s+e)/2;
		if(v[mid] >= key) {
			num = mid;
			e = mid-1;
		}
		else s = mid+1;
	}
	return num;
}

void solve() {
	vector<int> v(s.begin(), s.end());
	for(int i = 0; i<n; i++) {
		int x = lower_bounds(v, 0, (int)v.size(), arr[i]);
		cout << x << " ";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(); 
	
	return 0;
}
// PM 03:41
