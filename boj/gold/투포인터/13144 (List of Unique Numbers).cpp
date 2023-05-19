#include <bits/stdc++.h>

using namespace std;

int n; 
int arr[100001];
bool visited[100001];

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) cin >> arr[i];
}

void solve() {
	int l = 0; int r = 0;
	long long len = 0;
	while(l<n) {
		while((!visited[arr[r]]) && r<n) {
			visited[arr[r]] = true;
			r++;
		}
		
		len += r-l;
		visited[arr[l++]] = false;
	}
	cout << len;
}

/*
12345
1, 12, 123, 1234, 12345
2, 23, 234, 2345
3, 34, 345
4, 45
5 -- 15°³ 

12312
1, 12, 123
2, 23, 231
3, 31, 312
1, 12
2 -- 12°³ 

6 1 7 10 9 10 1 7 6 4
6, 61, 617, 61710, 617109
1, 17, 1710, 17109
*/
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
