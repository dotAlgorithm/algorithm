#include <bits/stdc++.h>

using namespace std;

int arr[1001];
int d[1001];
int m;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	for(int i = 1; i<=n; i++){
		cin >> arr[i];
		int j = i;
		d[i] = 1;
		while(j--){
			if(arr[i] > arr[j]) d[i] = max(d[i], d[j]+1);
			m = max(m, d[i]);
		}
	}
	cout << m;
	return 0;
}
