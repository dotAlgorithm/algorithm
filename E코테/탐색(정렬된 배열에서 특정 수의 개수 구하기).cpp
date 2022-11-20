#include <bits/stdc++.h>

using namespace std;

int n, x;
//int arr[1000001];
vector<int> v;

int countByRange(vector<int>& v, int l, int r){
	vector<int>::iterator r_idx = upper_bound(v.begin(), v.end(), r);
	vector<int>::iterator l_idx = lower_bound(v.begin(), v.end(), l);
	return r_idx - l_idx;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int elem;
	
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		cin >> elem;
		v.push_back(elem);
	//	arr[elem]++;
	}
	cout << countByRange(v, x, x);
	//cout << arr[x] << "\n"; 
	
	return 0;
}
