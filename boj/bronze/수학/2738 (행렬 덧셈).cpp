#include <bits/stdc++.h>

using namespace std;

int n, m;
int ma[101][101];
int mb[101][101];
int main(){
	cin	>> n>> m;
	for(int i=0; i<n; i++){
		for(int j = 0;j<m ;j++){
			cin >> ma[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j = 0;j<m ;j++){
			cin >> mb[i][j];
			ma[i][j] += mb[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j = 0;j<m ;j++){
			cout << ma[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
