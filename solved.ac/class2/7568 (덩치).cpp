#include <bits/stdc++.h>
#define w first
#define h second

using namespace std;

int n;
pair<int, int> person[51];

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		int weight, height;
		cin >> weight >> height;
		person[i].w = weight;
		person[i].h = height;
	}	
}

void solve() {
	for(int i = 0; i<n; i++) {
		int rank = 1;
		for(int j = 0; j<n; j++) {
			if(i==j) continue;
			if(person[j].w > person[i].w) {
				if(person[j].h > person[i].h) {
					rank++;
				}
			}
		}
		cout << rank << " ";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
