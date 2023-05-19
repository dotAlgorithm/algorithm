#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int n;
vector<pair<int, pair<int, int> > > v;

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		int a, b, c;
		cin >> a >> c >> b;
		v.push_back({a,{c, b}});
	}
}

bool valid(int key) {
	int cnt = 0;
	for(int i = 0; i<n; i++) {
		int a = v[i].first;
		int b = v[i].second.second;
		int c = v[i].second.first;
		
		if(key < a) continue;
		if(key > c) cnt += ((c-a)/b + 1);
		else cnt += ((key-a)/b + 1);
	}
	return cnt%2;
} 
void solve() {
	ll s = 1; 
	ll e = INT_MAX;
	ll ans = 0;
	while(s <= e) {
		ll m = (s+e)/2;
		if(valid(m)) {
			ans = m;
			e = m - 1;
		}
		else s = m + 1;
	}
	
	if(ans == 0) {
		cout << "NOTHING";
	} 
	else {
		int cnt = 0;
		for(int i = 0; i<n; i++) {
			int a = v[i].first;
			int b = v[i].second.second;
			int c = v[i].second.first;
			if (a <= ans && ans <= c && 
			(ans - a) % b == 0) cnt++;
		
		}
		
		cout << ans << " " << cnt;	
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

/*
1. �Ű����� Ž������ 1~INT_MAX���� search
2. mid�� �������� v[i]�� cnt++;
-> ������ ���� �ִ� mid������ �� ���� (������ ����)
3. cnt�� Ȧ���̸� mid �̻��� ��� Ȧ��, �ݴ�� ¦��
-> Ȧ���� e = mid -1 
*/
