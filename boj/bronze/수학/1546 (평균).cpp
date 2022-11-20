#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int i, n, m=0;
	double s=0;
	cin >> n;
	int* score = new int[n];
	for(i=0; i < n; i++){
		cin >> score[i];
		m = max(m, score[i]);
	}
	for(i=0; i<n; i++)
		s += (double)score[i]/m * 100;
	
	cout << s/n;
	return 0;
}
