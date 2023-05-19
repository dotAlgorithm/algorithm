#include <bits/stdc++.h>

using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	stack<int> mbit;
	int n;
	cin >> n;
	if(!n) {
		cout << 0;
		return 0;
	}
	while(n){
		if(n<0 && n%-2) {
			n-=1;
			mbit.push(1);	
		}
		else mbit.push(n%-2);
		n/=-2;
	}
	while(!mbit.empty()) {
		cout << mbit.top();
		mbit.pop();
	}
	return 0;
}

// n < 0 and n == odd, n-=1 
