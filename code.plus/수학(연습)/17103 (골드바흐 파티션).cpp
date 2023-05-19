#include <bits/stdc++.h>

using namespace std;

bool a[1000001];
vector<int> prime;
int n;
int cnt;

void init() {
	for(int i = 2; i<1000001; i++) {
		if(a[i]) continue;
		prime.push_back(i);
		for(int j = i*2; j<1000001; j+=i){
			a[j] = true;
		}
	}	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	init();
	cin >> n;
	while(n--) {
		int num;
		cin >> num;
		int i = 0.;
		int cnt = 0;
		while(true) {
			int p = prime[i++];
			if(p > (num/2)) break;
			if(!a[num-p]) cnt++;
		}
		cout << cnt << "\n";
	} 
	return 0;
}
