#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, v, i;
	int* arr = new int[201]; 

	cin >> n;

	for(i=0; i<n; i++) {
		cin >> v;
		arr[v+100]++;
	}

	cin >> v;
	cout << arr[v+100];
	delete[] arr;
	return 0;
}
