#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int h, m, add;
	
	cin >> h >> m;
	cin >> add;
	
	m+=add;
	h+=m/60;
	m%=60;
	if(h>23) h-=24;
	
	cout << h << " " << m;
	return 0;
}
