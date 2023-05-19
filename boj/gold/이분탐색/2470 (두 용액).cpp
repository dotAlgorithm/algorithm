#include <bits/stdc++.h>

using namespace std;

int n;
int arr[100001];

// lower Bound
void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);
}

int solve(int s, int e, int key) {
	int m;
	while(s<=e) {
		m = (s+e)/2;
		if(arr[m] < key) s = m+1;
		else e = m-1;
	}
	return s;
}

void ps() {
	int sum = 0x7fffffff;
	pair<int, int> p;
	for(int i = 0; i<n-1; i++) {
		int v = lower_bound(arr+i+1, arr+n, -arr[i]) - arr;
		//cout << arr[i] << " - " << arr[v] <<
		//", " << arr[v-1] <<"\n";
		
		if(abs(sum) > abs(arr[i] + arr[v]) && (arr[v] != 0 && i!=v)){
			p = {i, v};
			sum = arr[i] + arr[v];
		//	cout << "i, v = " << i << ", " << v;
		//	cout << " => " << sum <<"\n";
		}
		if(abs(sum) > abs(arr[i] + arr[v-1]) && (arr[v-1] != 0 && i!=(v-1))) {
			p = {i, v-1};
			sum = arr[i] + arr[v-1];
		//	cout << "i, v-1 = " << i << ", " << v-1;
		//	cout << " => " << sum <<"\n";
		}
		//cout << p.first << ", " << p.second <<"\n";
	}
	int x = arr[p.first];
	int y = arr[p.second];
	cout << min(x,y) << " " << max(x, y);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	ps();
	
	return 0;
}

/* Two Pointer
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
*/
