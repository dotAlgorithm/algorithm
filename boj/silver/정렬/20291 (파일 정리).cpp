#include <iostream>
#include <algorithm>

using namespace std;

int n;
string arr[50001];

void input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		arr[i] = arr[i].substr(arr[i].find(".") + 1);
	}
	sort(arr, arr+n);
}

void solve() {
	int cnt = 1;
	for(int i = 1; i<=n; i++) {
		if(arr[i-1]!=arr[i]) {
			cout << arr[i-1] << " " << cnt << "\n";
			cnt = 1;
		}
		if(arr[i-1] == arr[i]) cnt++;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	return 0;
}
