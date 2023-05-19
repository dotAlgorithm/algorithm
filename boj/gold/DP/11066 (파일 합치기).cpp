#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	priority_queue<int> q;
	int n;
	 
	cin >> n;
	for(int i = 0; i<n; i++) {
		int x;
		cin >> x;
		q.push(-x);
	}
	int sum = 0;
	while(q.size()>=2) {
		int x = -q.top(); q.pop();
		int y = -q.top(); q.pop();
		sum += (x+y);
		q.push(-(x+y));
	}
	if(q.size()==1) sum+=(-q.top());
	cout << sum;
	return 0;
}
