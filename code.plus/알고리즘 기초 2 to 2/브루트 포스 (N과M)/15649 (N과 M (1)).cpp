#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[9];
bool chk[9]; 

void out(int len){
	if(len > m) {
		for(int i = 1; i<=m; i++) {
			cout << arr[i] << " ";
		} cout <<"\n";
	}
	else {
		for(int i = 1; i<=n; i++){
			if(!chk[i]) {
				arr[len] = i;
				chk[i] = true;
				out(len+1);	
				chk[i] = false;
			}
		}
	}
}

int main(){
	cin >> n >> m;
	out(1);
	return 0;
}
