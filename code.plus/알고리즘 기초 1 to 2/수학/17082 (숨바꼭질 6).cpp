#include <bits/stdc++.h>

using namespace std;

int n;
int s;
vector<int> arr; 

int gcd(int a, int b) {
	while(b) {
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n >> s;
	while(n--) {
		int x;
		cin >> x;
		arr.push_back(abs(x-s));
	}
	int g = arr[0];
	for(int i =1; i<arr.size(); i++) {
		g = gcd(g, arr[i]);	
	}
	cout << g;
	
	return 0;
}
