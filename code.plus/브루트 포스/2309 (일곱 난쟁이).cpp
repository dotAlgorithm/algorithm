#include <bits/stdc++.h>

using namespace std;

int arr[9];
int sum;
bool visited[9];
void input() {
	for(int i = 0; i<9; i++) {
		cin >> arr[i];
		sum += arr[i];	
	}
	sort(arr, arr+9);
}

void solve() {
	for(int i = 0; i<8; i++) {
		for(int j = i+1; j<9; j++) {
			if(sum - arr[i] - arr[j] == 100) {
				visited[i] = visited[j] = true;
				return;
			}
		}
	}
	
}

void print() {
	for(int i = 0; i<9; i++) {
		if(!visited[i]) cout << arr[i] << "\n";
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	print();
	
	return 0;
}
