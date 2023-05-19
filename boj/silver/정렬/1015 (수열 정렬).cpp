#include <iostream>
#include <algorithm>

using namespace std;

int n;
pair<int, int> arr[50];
int prr[50];

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		int num;
		cin >> num;
		arr[i] = {num, i};
	}
	sort(arr, arr+n);
}

void order(){
	for(int i = 0; i<n; i++) {
		prr[arr[i].second] = i;
	}
	for(int i = 0; i<n; i++){
		cout << prr[i] << " ";
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	input(); 
	order();
	
	return 0;
}
