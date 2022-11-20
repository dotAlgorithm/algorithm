#include <bits/stdc++.h>

using namespace std;

int quad(int x, int y){
	if(x>0){
		if(y>0) return 1;
		return 4;
	}
	else {
		if(y>0) return 2;
		return 3;
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int x, y;
	cin >> x;
	cin >> y;
	cout << quad(x, y);
	return 0;
}
