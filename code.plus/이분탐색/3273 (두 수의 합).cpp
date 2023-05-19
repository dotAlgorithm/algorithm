#include <bits/stdc++.h>

using namespace std;

int n;
int arr[100001];
int x;

// Binary Search
void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		cin >> arr[i];
	}
	cin >> x;
	sort(arr, arr+n);
}

int lower_bouds(int s, int e, int key) {
	while(s<=e) {
		int m = (s+e)/2;
		if(arr[m] <= key) s = m + 1;
		else e = m - 1;
	}
	return s;
}

void solve() {
	int cnt = 0;
	
	for(int i = 0; i<n-1; i++) {
		int v = lower_bound(arr+i, arr+n, x-arr[i])-arr;
		if(arr[v] + arr[i] == x && i != v) cnt++;
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

/* Two Pointer
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
*/
