#include <bits/stdc++.h>

using namespace std;

vector<char> order;
stack<int> seq;
int n;
int idx = 1;

void sort(int num) {
	while(num >= idx) {
		seq.push(idx++);
		order.push_back('+');
	}
	while(!seq.empty() && seq.top() == num) {
		seq.pop();
		order.push_back('-');
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n;
	for(int i = 1; i<=n; i++){
		int num;
		cin >> num;
		sort(num);
	} 
	if(seq.empty()) {
		for(int i = 0; i < order.size(); i++){
			cout << order[i] << "\n";
		}
	}
	else cout << "NO" << "\n";

	return 0;
} 

