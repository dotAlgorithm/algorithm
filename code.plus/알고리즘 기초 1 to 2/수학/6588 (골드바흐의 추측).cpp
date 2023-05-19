#include <bits/stdc++.h>

using namespace std;

bool arr[1000001];
vector<int> prime;

void init() {
	for(int i = 2;i<1000001; i++){
		if(!arr[i]) {
			prime.push_back(i);
			for(int j=i*2; j<=1000001; j+=i){
				arr[j] = true;
			}	
		}
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	init();
	
	while(true){
		int n;
		cin >> n;
		if(n == 0) break;
		for(int i = 1; i<prime.size(); i++) {
			int p = prime[i];
			if(!arr[n-p]) {
				cout << n << " = " << p << " + "
				<< n-p << "\n";
				break;
			}
		}
	}
	return 0;
}
