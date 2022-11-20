#include <bits/stdc++.h>

using namespace std;

string s;
int N, M, R, i, j;

void dfs(int** arr){
	if (R==0) return;
	int depth = min(n, m) / 2 + min(n, m) % 2;
	for(int s=0; s<depth; s++){
		int r = s;
		int c = s;
		int pre = arr[r][c];
		
		while (r < n - 1 - start)
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> N >> M >> R;
	int **arr = new int*[N];
	
	for(i=0; i<N; i++) arr[i] = new int[M];
	
	for(i = 0; i<N ; i++)
		for(j=0; j<M; j++)
			cin >> arr[i][j];	
	for(i = 0; i<N ; i++){
		for(j = 0; j<M; j++)
			cout << arr[i][j] << " ";
		cout << "\n";
	}	
	return 0;
}
