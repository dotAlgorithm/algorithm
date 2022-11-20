#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);      
	cin.tie(0);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
	int n[6]  = {1, 1, 2, 2, 2, 8};
	int *peace = new int[6];
	
	for (int i =0 ;i<6;i++) {
		cin >> peace[i];
		cout << n[i] - peace[i] << " ";
	}
	
	delete[] peace;
	
	return 0;
}
