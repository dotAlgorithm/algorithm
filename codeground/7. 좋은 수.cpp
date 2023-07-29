#include <iostream>
#include <unordered_map>
using namespace std;

int Answer;
int n;
 
int arr[5005];
unordered_map<int, bool> m, two;

void solve(int idx) {
	for(auto &x : m) {
		int addNum = x.first+arr[idx];
		if(two.find(addNum) == two.end()) two[addNum] = true; 
	}
	
	for(int i = 0; i<idx; i++) {
		int findNum = arr[idx] - arr[i];
		if(two.find(findNum) != two.end()) Answer += 1;
		return ;
	}
}

void input() {
	m.clear();
	two.clear();
	cin >> n;
	
	for(int i = 0; i<n; i++) {
		cin >> arr[i];
		m[arr[i]] = true;
		solve(i);
	}
	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	Answer = 0;
		
	input();
		
	cout << Answer << endl;

	return 0;
	
}
