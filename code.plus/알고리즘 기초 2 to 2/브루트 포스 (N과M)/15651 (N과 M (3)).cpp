#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[8];

void out(int len){
	if(len > m) {
		for(int i = 1; i<=m; i++) {
			cout << arr[i] << " ";
		} cout <<"\n";
	}
	else {
		for(int i = 1; i<=n; i++){
			arr[len] = i;
			out(len+1);
		}
	}
}

int main(){
	cin >> n >> m;
	out(1);
	return 0;
}
