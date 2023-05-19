#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100001];

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);
}
int mini(int a, int b, int c){
	if(abs(a+c) < abs(a+b)) {
		return c;
	}
	return b;
}
int finds(int s, int e, int key) {
	while(s<=e) {
		int m = (s+e)/2;
		if(arr[m] < -key) s=m+1;
		else e=m-1;
	}
	return mini(key, arr[s], arr[s-1]);
}

void solve(){
	pair<pair<int, int>, int> neuter=make_pair(make_pair(0, 0), 1000000001);
	for(int i = 0; i<n; i++){
		int sum = finds(0, n-1, arr[i]);
		if(abs(arr[i]+sum) < abs(neuter.second)) {
			neuter = {{arr[i], sum}, arr[i]+sum};
		}
		cout << arr[i] << ", " << sum << "\n";
	}
	int a = neuter.first.first;
	int b = neuter.first.second;
	cout << min(a,b) << " " << max(a,b);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
