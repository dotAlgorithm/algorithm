#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> lamp;
void input() {
	cin >> n >> m;
	for(int i = 0; i< m; i++) {
		int x;
		cin >> x;
		lamp.push_back(x);
	}
}

bool valid(int h) {
	int left, right;
	left = lamp[0] - h;
	right = lamp[0] + h;
	
	// ������ ��ο� ���� ������ 
	if(left > 0) return false;
	
	for(int i = 1; i<lamp.size(); i++) {
		if(lamp[i] - h > right) return false;
		right = lamp[i] + h;
	}
	
	return right >= n;
}

void solve() {
	int s = 0; 	int e = n;
	while(s<=e) {
		int mid = (s+e)/2;
		if(valid(mid)) {
			e = mid-1;
		}
		else {
			s = mid+1;
		}
	}
	cout << s;
} 

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

/* 
1. ��ǥ x���� h��ŭ �¿�� ���� Ų�� on/off
2. ������ ���̸� ���ؼ� ��� ���� ų �� �ִ��� Ȯ���Ѵ�. 
*/
