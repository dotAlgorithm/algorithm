#include <iostream>
#include <algorithm>

using namespace std;

int t;
int n, m;
int eater[20001];
int food[20001];

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++){
		cin >> eater[i];
	}
	for(int i = 0; i<m; i++) {
		cin >> food[i];
	}
	sort(food, food+m);
}

int finds(int s, int e, int key) {
	int result = 0;
	while(s<=e) {
		int mid = (s+e) / 2;
		if(food[mid] < key) {
			result = mid+1;
			s = mid+1;	
		}
		else if(food[mid] >= key) {
			e = mid-1;
		}
	}
	return result;
}

void solve() {
	int cnt = 0;
	for(int i = 0; i<n; i++) {
		if(food[m-1] < eater[i]) {
			cnt += m;
		}
		else {		
			cnt += finds(0, m-1, eater[i]);	
		}
	}
	cout << cnt << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> t;
	while(t--){
		input();
		solve();	
	}
	return 0;
}
