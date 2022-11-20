#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int C, N, i, j, cnt, tot;
	double avg;
	cin >> C;
	for(i=0; i<C; i++){
		cin >> N;
		int *score = new int[N];
		cnt = tot = 0;
		for(j=0; j<N; j++){
			cin >> score[j];
			tot += score[j];
		}
		avg = (double)tot/N;
		for(j=0; j<N; j++) 
			if((double)score[j] > avg) cnt++;
		cout << fixed;
		cout.precision(3); 
		cout << (double)cnt/N * 100 << "%\n";
		delete[] score;
	}
	return 0;
}
