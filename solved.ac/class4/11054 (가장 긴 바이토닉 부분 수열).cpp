#include <bits/stdc++.h>

using namespace std;

int arr[1001];
int d[1001][3];
int m;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	arr[0] = 1001;
	for(int i = 1; i<=n; i++){
		cin >> arr[i];
		int j = i;
		d[i][0] = d[i][1] = d[i][2] = 1;
		while(j-- > 1){
			if(arr[i] > arr[j]) {
				d[i][0] = max(d[i][0], d[j][0]+1);
				d[i][2] = max(d[i][2], d[i][0]);
			}
			if(arr[i] < arr[j]){
				d[i][1] = max(d[i][1], d[j][1]+1);
				d[i][2] = max(max(d[j][0]+1, d[j][2]+1), d[i][2]);
			}
		}
		m = max(m,d[i][2]);
	}
	
	cout << m;
	return 0;
}
