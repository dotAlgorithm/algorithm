#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int* arr = new int[31];
	int i, n;
	for(i=1; i<=28; i++){
		cin >> n;
		arr[n] = 10;
	}
	for(i=1; i<=30; i++)
		if(arr[i]!=10) cout << i << "\n";
	delete[] arr;
	return 0;
}
