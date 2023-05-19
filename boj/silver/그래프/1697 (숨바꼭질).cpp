#include <bits/stdc++.h>

using namespace std;

int n, k;
int visited[100001];
void input() {
	cin >> n >> k;
}

void bfs() {
	queue<int> q;
	q.push(n);
	visited[n] = 1;
	
	while(!q.empty()) {
		int now = q.front(); q.pop();
		int bck = now-1;
		int frt = now+1;
		int jmp = now*2;
		
		if(bck >= 0 && visited[bck]==0) {
			visited[bck] = visited[now]+1;
			q.push(bck);
		}
		if(frt <= 100000 && visited[frt]==0 ) {
			visited[frt] = visited[now]+1;
			q.push(frt);
		}
		if(jmp <= 100000 && visited[jmp]==0) {
			visited[jmp] = visited[now]+1;
			q.push(jmp);
		}
	}
	
	cout << visited[k]-1;
		
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	bfs();
	
	return 0;
}
