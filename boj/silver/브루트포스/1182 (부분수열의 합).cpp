#include <bits/stdc++.h>

using namespace std;

int n, s, ans;
int arr[21];

void input() {
	cin >> n >> s;
	for(int i =0 ; i<n;i++){
		cin >> arr[i];
	}
}

void solve(int k, int sum) {
	if(k==n){
		if(sum == s) ans++;	
	}
	else{	
		solve(k+1, sum+arr[k]);
		solve(k+1, sum);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input(); 
	if(s==0) ans--;
	solve(0,0);
	cout << ans;
	
	return 0;
}
