#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int money, i, cnt=0;
	int change[6] = {500, 100, 50, 10, 5, 1};
	
	cin >> money;
	money = 1000-money;
	
	for(int i=0;i<6;i++){
		cnt += money / change[i];
		money %= change[i];
	}
	cout << cnt;
	return 0;
}
