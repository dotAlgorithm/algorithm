#include <bits/stdc++.h>

using namespace std;

int cnt, t;

bool check(int h, int m, int s) {
	if(h/10 == t || h % 10==t || m/10 ==t || m%10 ==t || s/10 == t || s % 10 == t)
		return true;
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, i, j, k;
	cin >> n >> t;
	
	for(i=0;i<=n;i++)
		for(j=0;j<60;j++)
			for(k=0;k<60;k++)
				if(check(i,j,k)) cnt++;
	cout << cnt;

	return 0;
}
