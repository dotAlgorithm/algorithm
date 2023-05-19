#include <bits/stdc++.h>

using namespace std;

int n=1, m=1, m_n;
int ma;
int main(){
	for(int i=1; i<=9; i++){
		for(int j = 1;j<=9 ;j++){
			cin >> ma;
			if (m_n < ma){
				m_n = ma;
				n = i; m = j;
			}
		}
	}
	cout << m_n << "\n" << n << " " << m;
	return 0;
}

