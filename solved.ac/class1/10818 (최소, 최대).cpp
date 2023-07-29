#include <bits/stdc++.h>

#define max(a, b) (((a)>(b))?(a):(b))
#define min(a, b) (((a)<(b))?(a):(b))

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, i, t, max_n=0x80000000, min_n=0x7fffffff;
	
	cin >> n;
	for(i=0;i<n;i++){
		cin >> t;
		max_n = max(max_n, t);
		min_n = min(min_n, t);
	}
	cout << min_n << " " << max_n;
	return 0;
}
