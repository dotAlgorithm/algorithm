#include <bits/stdc++.h>

using namespace std;

int n, k;
vector<int> arr;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		int x;
		cin >> x;
		arr.push_back(x);
	}
	int s = 0;
	int e = 1e9;
	int r = 0;
	while(s<=e) {
		long long int total = 0;
		int m = (s+e)/2;
		for(int i =0;i<n;i++)
			if(arr[i] > m) total += arr[i] - m;
		if(total < k) e = m-1;
		else {
			r = m;
			s = m+1;
		}
	}
	cout << r << "\n";
	return 0;
}
