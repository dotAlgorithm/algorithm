#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;

int main() {
	int n;
	cin >> n;
	for(int i = 0; i<n; i++){
		int a, b, c;
		cin >> a >> b;
		for(int j = 0; j<a; j++){
			cin >> c;
			arr.push_back(c);
		}
		for(int j = 0; j<a;j++){
			cout<<arr[j]<<"\n";
		}
	}
	return 0;
}
