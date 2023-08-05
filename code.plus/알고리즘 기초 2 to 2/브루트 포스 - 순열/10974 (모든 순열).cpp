// acmicpc 10974
// authored by jihwankim
// 23-08-01 PM 04:21
// code.plus
#include <bits/stdc++.h>

using namespace std;

int n;
int arr[10];
//bool chk[10];
//int printlist[10];

void input() {
	cin >> n;
	for(int i = 0 ; i<n; i++) {
		arr[i] = i+1; 
	}
}
/*
void solve() {
	while(true) {
		for(int k = 0; k<n; k++) cout << arr[k] << " ";
		cout << "\n";
		int i, j;
		for(i = n-2; arr[i] > arr[i+1]; i--);
		
		if(i < 0) return;
		
		sort(arr+i+1, arr+n, greater<int>());
		for(j = n-1; arr[i] > arr[j]; j--);
		swap(arr[i], arr[j]);
		sort(arr+i+1, arr+n);
	}
}*/
/*
void solve(int k) {
	if(k == n) {
		for(int i = 0; i<k; i++) {
			cout << printlist[i] << " ";
		}
		cout << "\n";
	}
	for(int i = 0; i<n; i++) {
		if(!chk[i]) {
			chk[i] = true;
			printlist[k] = arr[i];
			solve(k+1);
			chk[i] = false;
		}
	}
}*/

void solve() {
	do{
		for(int i = 0; i<n; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	while(next_permutation(arr, arr+n));
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(); 
	
	return 0;
}
// PM 04:37
