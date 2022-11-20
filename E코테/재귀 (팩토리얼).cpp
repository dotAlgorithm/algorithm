#include <bits/stdc++.h>

using namespace std;

int factorial_iterative(int n) {
	int result = 1;
	for(int i = 1; i<=n ;i++) result*=i;
	return result;
}

int factorial_recursive(int n){
	if(n<=1) return 1;
	return n*factorial_recursive(n-1);
}
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	
	cout << "�ݺ��� ���� : " << factorial_iterative(5) << "\n";
	cout << "����� ���� : " << factorial_recursive(5) << "\n";
	
	return 0;
}
