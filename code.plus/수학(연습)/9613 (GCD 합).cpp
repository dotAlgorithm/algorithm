#include <bits/stdc++.h>
using namespace std;
int t;

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

	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long long sum = 0;
		vector<int> arr;
		while(n--) {
			int num;
			cin >> num;
			arr.push_back(num);
		}
		for(int i = 0; i<arr.size()-1; i++) {
			for(int j = i+1; j<arr.size(); j++) {
				sum += gcd(arr[i], arr[j]);
			}
		}
		cout << sum << "\n";
	}
	return 0;
}
