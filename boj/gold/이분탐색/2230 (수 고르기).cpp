// solution.cpp
// 문제 풀이 전용 파일
// author : KimJiHwan
// 2023-05-20 AM 03: 03 

#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[100001];

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);
}

int dnc(int s, int e, int target) {
	int ans = INT_MAX;
	while(s<=e) {
		int mid = (s+e)/2;
		int key = arr[mid] - target;
		if(key >= m) {
			ans = key;
			e = mid - 1;
		}
		else s = mid + 1;
	}
	return ans;
}

void solve() {
	int diff = INT_MAX;
	for(int i = 0; i<n; i++) {
		int target = m + arr[i];
		diff = min(diff, dnc(i+1, n-1, arr[i]));
	}
	cout << diff;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
