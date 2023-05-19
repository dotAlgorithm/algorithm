#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int n;
int arr[100001];

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) cin >> arr[i];
	sort(arr, arr+n);
}

int zero = INT_MAX;
void solve() {
	int l= 0; int r = n-1;
	int ph8, ph6;
	for(l; l < r; ) {
		if(zero > abs(arr[l]+arr[r])) {
			zero = abs(arr[l]+arr[r]);
			ph8 = arr[l];
			ph6 = arr[r];
		}
		if(arr[l] + arr[r] > 0) r--;
		else l++;
	}
	cout << ph8 << " " << ph6;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
