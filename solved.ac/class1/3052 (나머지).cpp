#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int* arr = new int[42];
	int i, n;
	for(i=0;i<42;i++) arr[i] = 0;
	
	for(i=1; i<=10; i++){
		cin >> n;
		arr[n%42]++;
	}
	n = 0;
	for(i=0; i<42; i++)
		if(arr[i]) n++;
	cout << n;
	delete[] arr;
	return 0;
}
