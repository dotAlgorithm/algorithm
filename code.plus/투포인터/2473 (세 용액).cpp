#include <bits/stdc++.h>

using namespace std;

int n;
int arr[5001];

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) cin >> arr[i];
	sort(arr, arr+n);
}

void solve() {
	long long sum = 0;
	long long minNum = 1e10; 
	int a, b, c;
	for(int i = 0; i<n; i++)
		cout << "[" << arr[i] << "]";
	cout << "\n";
	for(int l=0, r=1; l<n-2;) {
		sum = arr[l]+arr[r];
		int v = lower_bound(arr+r+1, arr+n, -sum)-arr;
		cout << "v = " << v<<"\n";
		if(minNum > abs(sum+arr[v])) {
			a = arr[l];
			b = arr[r];
			c = arr[v]; 
			minNum = abs(sum+arr[v]);
		}
		if(minNum > abs(sum+arr[v-1])) {
			a = arr[l];
			b = arr[r];
			c = arr[v-1]; 
			minNum = abs(sum+arr[v-1]);
		}
		cout << "sum = " << sum <<
		"arr[v] = " << arr[v] << ", arr[v-1] = "
		<< arr[v-1] << ", l = "
		<< l << ", r = " << r <<"\n";
		if(sum+arr[v] < 0) r++;
		else l++;
	}
	cout << a << b<< c;
}

/*
-97 -6 -2 6 98
-97+-6 -> -103, abs = 103과 가장 가까운 98
-97-6+98 -> -5, 0보다 작음, right++
-97-2 -> -99 이분탐색, 98
-97-2+98 -> -1, 0보다 작음, right++
-97+6 -> -91, 이분탐색 = 98 => 7, 0보다 큼 left++ 
*/

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
