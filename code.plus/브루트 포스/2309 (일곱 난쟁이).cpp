#include <bits/stdc++.h>

using namespace std;

int arr[9];
<<<<<<< HEAD
vector<int> asc;
int sum;

int solve(int k) {
	if(k==9) return 0;
	for(int i = k; i<9; i++){
		sum += arr[i];
		if(solve(i+1)==1 || (sum==100&&k>=6)) {
			asc.push_back(arr[i]);
			return 1;
		}
		sum -= arr[i];
	}	
	return 0;	
}

=======
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
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
<<<<<<< HEAD
	for(int i = 0; i<9;i++){
		cin >> arr[i];
	}	
	
	solve(0);
	sort(asc.begin(), asc.end());
	for(int i = 0; i<asc.size(); i++) {
		cout << asc[i] << "\n";
	}
=======
	input();
	solve();
	print();
	
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3
	return 0;
}
