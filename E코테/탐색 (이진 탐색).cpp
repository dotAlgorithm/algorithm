#include <bits/stdc++.h>

using namespace std;
int binary_search(vector<int>& arr, int target, int s, int e) {
	if (s > e) return -1;
	int m = (s+e)/2;
	if(arr[m] == target) return m;
	else if (arr[m] > target)
		return binary_search(arr, target, s, m-1);
	else
		return binary_search(arr, target, m+1, e);
}
int binarySearch(vector<int>& arr, int target, int s, int e) {
	while (s<=e) {
		int m = (s+e)/2;
		if(arr[m] == target) return m;
		else if(arr[m] > target) e = m-1;
		else s = m+1;
	}
	return -1;
}

int n, target;
vector<int> arr;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> target;
	
	for(int i = 0; i<n; i++){
		int x;
		cin >> x;
		arr.push_back(x);
	}
	int result = binary_search(arr, target, 0, n-1);
	if(result == -1) {
		cout << "원소가 존재하지 않습니다.\n";
	}
	else cout << result + 1 << "\n";
	return 0;
}
