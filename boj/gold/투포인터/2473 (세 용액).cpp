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
	long long sum = LLONG_MAX;
	int s[3];
	for(int i = 0; i<n-2; i++) {
		long long a = arr[i];
		long long l = i+1, r = n-1; 
		while(l < r) {
			if(abs(sum) > abs(a+arr[l]+arr[r])) {
				sum = a+arr[l]+arr[r];	
				s[0] = a; s[1]=arr[l]; s[2]=arr[r];
			}
			if(a+arr[l]+arr[r] == 0) break;
			else if(a+arr[l]+arr[r] > 0) r--;
			else l++;
		}
	}
	sort(s, s+3);
	for(int i =0; i<3; i++) cout << s[i] << " ";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
