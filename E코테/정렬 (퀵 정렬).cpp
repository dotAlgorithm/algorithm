#include <bits/stdc++.h>

using namespace std;
	
int n = 10;
int target[10] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
 
void quickSort(int* target, int s, int e){
	if(s>=e) return;
	int pivot = s;
	int l = s+1;
	int r = e;
	while(l <= r){
		while(l <= e && target[l] <= target[pivot]) l++;
		while(r > s && target[r] >= target[pivot]) r--;
		if(l>r) swap(target[pivot], target[r]);
		else swap(target[l], target[r]);
	}
	quickSort(target, s, r-1);
	quickSort(target, r+1 ,e);
}
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	
	quickSort(target, 0, n-1);
	for(int i = 0; i<n ;i++) cout << target[i] << " ";
	return 0;
}
