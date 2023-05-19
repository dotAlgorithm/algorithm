#include <bits/stdc++.h>

using namespace std;

int n, m;
int card[500001];
int myCard[500001];

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) cin >> card[i];
	cin >> m;
	for(int i = 0; i<m; i++) cin >> myCard[i];
	sort(card, card+n);
}

int start(int s, int e, int key) {
	int mid;
	while(s<=e) {
		mid = (s+e)/2;
		if(card[mid] < key) {
			s = mid + 1;
		} 
		else e = mid - 1;
	}
	return s;
}

int end(int s, int e, int key) {
	int mid;
	while(s<=e) {
		mid = (s+e)/2;
		if(card[mid] > key) {
			e = mid - 1;
		} 
		else s = mid + 1;
	}
	return e;
}
void solve() {
	/*
	for(int i = 0; i<n; i++) {
		cout << card[i] << " ";
	} cout << "\n\n";*/
	for(int i = 0; i<m; i++) {
		int s = start(0,n-1,myCard[i]);
		int e = end(0, n-1, myCard[i]);
		cout << e-s+1 << " ";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
