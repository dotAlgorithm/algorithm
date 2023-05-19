#include <bits/stdc++.h>

using namespace std;

int arr[1000][3];
int idx[1000][3];

int n;

int dfs(int index, int color) {
	if(index == 1) return idx[index][color];
	return dfs(index-1, idx[index][color]);
}

int colorCheck(int color1, int color2) {
	if(color1 == 0){
		if(color2 == 0) {
			if(arr[n-1][1] > arr[n-1][2]) return arr[n-1][2];
			return arr[n-1][1];
		}
		if(color2 == 1) return arr[n-1][2];
		return arr[n-1][1];
	}
	if(color1 == 1){
		if(color2 == 1) {
			if(arr[n-1][0] > arr[n-1][2]) return arr[n-1][2];
			return arr[n-1][0];
		}
		if(color2 == 0) return arr[n-1][2];
		return arr[n-1][0];
	}
	if(color1 == 2){
		if(color2 == 2) {
			if(arr[n-1][1] > arr[n-1][0]) return arr[n-1][0];
			return arr[n-1][1];
		}
		if(color2 == 1) return arr[n-1][0];
		return arr[n-1][1];
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n;
		
	for(int i = 0; i<n; i++){
		for(int j = 0; j<3; j++) {
			cin >> arr[i][j];
		}
	}
	
    for(int i = 1; i<n-1; i++){
    	if(arr[i-1][1] > arr[i-1][2]){
    		arr[i][0] += arr[i-1][2];
    		idx[i][0] = 2;
		}
		else{
    		arr[i][0] += arr[i-1][1];
    		idx[i][0] = 1;	
		}
		
    	if(arr[i-1][0] > arr[i-1][2]){
    		arr[i][1] += arr[i-1][2];
    		idx[i][1] = 2;
		}
		else{
    		arr[i][1] += arr[i-1][0];
    		idx[i][1] = 0;	
		}
		
    	if(arr[i-1][1] > arr[i-1][0]){
    		arr[i][2] += arr[i-1][0];
    		idx[i][2] = 0;
		}
		else{
    		arr[i][2] += arr[i-1][1];
    		idx[i][2] = 1;	
		}
    }
    cout << dfs(n-2, idx[n-2][0]) << endl;
    cout << dfs(n-2, idx[n-2][1]) << endl;
    cout << dfs(n-2, idx[n-2][2]) << endl;
	cout << colorCheck(0, dfs(n-2, idx[n-2][0]));
	cout << colorCheck(1, dfs(n-2, idx[n-2][1]));
	arr[n-2][2] += colorCheck(2, dfs(n-2, idx[n-2][2]));
	
	
	for(int i = 0; i<3; i++){
		cout << arr[n-2][i] <<", " << idx[1][i]<<endl;
	}
	return 0;
}
