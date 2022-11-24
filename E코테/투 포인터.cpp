#include <bits/stdc++.h>

using namespace std;

int n = 5;
int m = 5;
int arr[] = {1, 2, 3, 2, 5}; 
int cnt, isum, e;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int s = 0 ; s<n; s++){
		while(isum < m && e< n) isum+=arr[e++];
		if(isum == m) cnt++;
		isum -= arr[s];
	}
	cout << cnt << "\n";
	return 0;
}
