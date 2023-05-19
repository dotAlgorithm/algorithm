#include <bits/stdc++.h>

using namespace std;

int n;
int arr[1001];
int d[1001][2];
int m, idx;
stack<int> lis;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> arr[i];
		d[i][0] = 1;
		int j = i;
		while(j--) {
			if(arr[i] > arr[j]){
				if(d[i][0] < d[j][0]+1){
					d[i][0] = d[j][0]+1;
					d[i][1] = j;
				}
			}
		}
		if(m<d[i][0]) {
			m=d[i][0];
			idx = i;
		}
	}
	
	while(idx) {
		lis.push(arr[idx]);
		idx = d[idx][1];
	}
	cout << m << "\n";
	while(!lis.empty()) {
		cout << lis.top() << " ";
		lis.pop();
	}
	return 0;
}
