// amcicpc 12886
// authored by jihwankim
// code.plus
// 23-09-29 AM 04:06
#include <bits/stdc++.h>

using namespace std;

bool chk[1501][1501];

struct stone{
	int a;
	int b;
};

pair<int, int> divide(int x1, int x2) {
	if(x1 > x2) return make_pair(x1-x2, x2+x2);
	if(x1 < x2) return make_pair(x2-x1, x1+x1);
	return {x1, x2};
}

bool solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a + b + c;
	
	queue<stone> q;
	q.push({a, b});
	chk[a][b] = true;
	
	while(!q.empty()) {
		a = q.front().a;
		b = q.front().b; q.pop();
		c = sum - a - b;
		
		if(a == b && b == c) return true;
		
		int ab, ba, ac, ca, bc, cb;
		tie(ab, ba) = divide(a, b);
		tie(ac, ca) = divide(a, c);
		tie(bc, cb) = divide(b, c);
		
		if(!chk[ab][ba]) {
			chk[ab][ba] = true;
			q.push({min(ab, min(ba, c)), max(ab, max(ba, c))});
		}
		if(!chk[ac][ca]) {
			chk[ac][ca] = true;
			q.push({min(ac, min(ca, b)), max(ac, max(ca, b))});
		}
		if(!chk[bc][cb]) {
			chk[bc][cb] =  true;
			q.push({min(bc, min(cb, a)), max(bc, max(cb, a))});
		}
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cout << solve();
	
	return 0;
}
// AM 04:32
