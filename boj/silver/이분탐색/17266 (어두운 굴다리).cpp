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
	
	// 왼쪽이 어두운 곳이 있으면 
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
1. 좌표 x에서 h만큼 좌우로 불을 킨다 on/off
2. 일정한 높이를 구해서 모두 불을 킬 수 있는지 확인한다. 
*/
