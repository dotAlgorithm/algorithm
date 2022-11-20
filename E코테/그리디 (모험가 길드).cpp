#include <bits/stdc++.h>

using namespace std;

int cnt, i, group;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i = 0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	for(i; i< n ;i++){
		cnt++;
		if(cnt >= arr[i]){
			group++;
			cnt=0;
		}
	}
	cout << group;
	
	return 0;
}
