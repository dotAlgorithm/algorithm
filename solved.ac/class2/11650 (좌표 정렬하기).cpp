#include <bits/stdc++.h>

using namespace std;

priority_queue< pair<int, int> > q;

int main() {
	
	cin.tie(NULL);
	int n;
	scanf("%d", &n);
	for(int i = 0; i<n; i++){
		int x, y;
		cin >> x >> y;
		q.push(make_pair(-x, -y));
	}
	while(!q.empty()){
		pair<int, int> p =  q.top(); 
        cout << -p.first << " " << -p.second <<"\n";
		q.pop(); 
	}
	return 0;
} 
