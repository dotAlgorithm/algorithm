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
		q.push(make_pair(-y, -x));
	}
	while(!q.empty()){
		pair<int, int> p =  q.top(); 
        cout << -p.second << " " << -p.first <<"\n";
		q.pop(); 
	}
	return 0;
} 
