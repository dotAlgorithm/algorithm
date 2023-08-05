// acmicpc 18111
// solved.ac Class 2
// authored by jihwankim
// 23-07-27 AM 08 : 53
#include <bits/stdc++.h>

using namespace std;

int n, m, b;
int arr[505][505];
int minH = INT_MAX;
int maxH = 0;

void input() {
	cin >> n >> m >> b;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cin >> arr[i][j];
			minH = min(minH, arr[i][j]);
			maxH = max(maxH, arr[i][j]);
		}
	}
	
}

void solve() {
	int minTime = INT_MAX;
	int height = minH;
	for(int h = minH; h <= maxH; h++) {
		int add = 0;
		int del = 0;
		// 지울 개수, 채울 개수 찾음. 
		for(int i = 0; i<n; i++)  {
			for(int j = 0; j<m; j++) {
				int diff = arr[i][j] - h;
				if(diff == 0) continue;
				if(diff < 0) add -= diff;
				else del += diff;
			}
		}
		
		// 채울 때, 인벤토리 용량 확인
		// 지울 때, 인벤토리에 채우게 됨.
		// add < del + b 일 때 인벤토리 용량이 더 많으므로 add가능
		// add == del + b 일 때, 딱 맞게 add 가능
		// add > del + b 일 때, add를 할 수 없음 
		if(add > del+b) continue;
		
		// add 당 시간 = 1초, del 당 시간 2초 
		// for문에서 높이가 계속 증가함
		// 시간이 작거나 같을 때를 기준으로 업데이트
		int time = add + (del*2);
		// add 시간은 del 시간보다 빠를 수 없으므로
		// 최악의 경우 del 256 * 500 * 500 개일 때도 int형
		if(time <= minTime) {
			minTime = time;
			height = h;
		}
	}
	
	cout << minTime << " " << height;
} 

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

/*
1. 땅의 높이를 센다.
2. 인벤토리의 공간을 확인한다. 
3-1. 공간의 여유가 있으면 블록을 채운다.
3-2. 공간의 여유가 없으면 블록을 뺀다. 
*/

// AM 09:47
