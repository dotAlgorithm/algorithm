#include <bits/stdc++.h>

using namespace std;

int n, x;
int arr[100001];

void input() {
	cin >> n;
	for(int i =0;i<n; i++) cin >> arr[i];
	cin >> x;
	sort(arr, arr+n);
}

void solve() {
	int left = 0, right = n-1;
	int sum = 0, cnt = 0;
	
	while(left < right) {
		sum = arr[left] + arr[right];
		if(sum == x) cnt++;
		if(sum >= x) right--;
		else left++;
	}
	
	cout << cnt;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
} 
