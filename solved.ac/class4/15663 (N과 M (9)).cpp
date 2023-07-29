#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[8];
bool visited[8];
int num[8];

void input() {
	cin >> n >> m;
	for(int i= 0; i<n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);
}

void rec(int k) {
	if(k==m) {
		for(int i = 0; i<k; i++) {
			cout << num[i] << " ";
		}
		cout << "\n";
	}
	else {
		int last = 0;
		for(int i = 0; i<n; i++) {
			if(!visited[i]) {
				if(arr[i] == last) continue;
				num[k] = arr[i];
				last = arr[i];
				visited[i] = true;
				rec(k+1);
				visited[i] = false;
			}			
		}	
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	rec(0);
	
	return 0;
}
