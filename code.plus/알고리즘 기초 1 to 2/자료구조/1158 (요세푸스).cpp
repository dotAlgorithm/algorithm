#include <bits/stdc++.h>

using namespace std;

queue<int> q;
int n, k;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n >> k;
	
	for(int i = 1; i<=n; i++) q.push(i);
	
	cout << "<";
	while(n--) {
		for(int i = 1; i<k; i++){
			q.push(q.front());
			q.pop();		
		}
		cout << q.front();
		q.pop();
		if(q.empty()) cout << ">";
		else cout << ", ";
	}	
	return 0;
}
