#include <bits/stdc++.h>
#define INF 1e9

using namespace std;

int n, m;
int graph[101][101];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	
	for(int i = 0; i< 101; i++){
		fill_n(graph[i], 101,INF);
	}
	for(int a = 1; a<=n ;a++){
		for(int b =1; b<=n ;b++){
			if(a==b) graph[a][b] = 0;
		}
	}
	for(int i = 0; i<m ;i++){
		int a, b;
		cin >> a >> b;
		graph[a][b] = 1;
		graph[b][a] = 1;
	}
	int x, k;
	cin >> x >> k;
	
	for(int k=1;k<=n;k++){
		for(int a = 1; a<=n; a++){
			for(int b = 1; b<=n; b++){
				graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b]);
			}
		}
	}
	
	int dis = graph[1][k] + graph[k][x];
	

	if(dis==INF) cout << "INF\n";
	else cout << dis << "\n";
	
	return 0;
}
