#include <bits/stdc++.h>

using namespace std;

int arr[10001];

int cnt(int n) {
	int cnt = 0;
	while(n) {
		if(n%10==6) cnt++;
		n/=10;
	}
	return cnt;
}

int size(int n) {
	int size = 1;
	while(n) {
		size*=10;
		n/=10;
	} 
	return size;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	arr[1] = 666;
	for(int i = 2; i<=n; i++) {
		if(cnt(arr[i-1]) == 3) {
			arr[i] = arr[i-1]+size(arr[i-1]);
		}
		else {
			arr[i] = arr[i-1]+1;
		}
	}
	cout << arr[n];
	
	return 0;
}
