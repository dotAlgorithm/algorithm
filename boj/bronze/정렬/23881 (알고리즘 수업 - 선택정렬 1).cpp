#include <bits/stdc++.h>

using namespace std;
	
int n, k;
void swap(int* arr, int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
void selection_sort(int* arr){
	int cnt = 0, m = 0, idx;
	for(int i = n; i>=2; i--){
		m = 0;
		for(int j=1; j<=i; j++){
			if(m<arr[j]) {
				m = arr[j];
				idx = j;		
			}
		}
		
		if(m!=arr[i]) {
			cnt++;
			if(cnt==k) cout << arr[i] << " " << m;
			
			swap(arr, idx, i);
		}
	}
	if(cnt<k) cout << "-1";
}
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> k;
	int *arr = new int[n+1];
	for(int i = 1; i<n+1;i++) cin >> arr[i];
	selection_sort(arr);
	delete[] arr;
	
	return 0;
}
