// acmicpc 5430
// authored by jihwankim
// 23-07-29 PM 04:52
// solved.ac Class3
#include <bits/stdc++.h>

using namespace std;

string order;
int n;
deque<int> nums;

void input() {
	string numList;
	cin >> order >> n >> numList;
	string num;
	for(int i = 1; i<numList.size(); i++) {
		if(numList[i] == ',' || numList[i] == ']') {
			if(num.empty()) continue;
			nums.push_back(stoi(num));
			num.clear();
		}
		else num+=numList[i];
	}
}

void solve() {
	bool reversed = false;
	for(int i = 0; i<order.size(); i++) {
		if(order[i] == 'R') reversed = reversed ? false : true;
		else {
			if(nums.empty()) {
				cout << "error\n";
				return ;
			}	
			if(reversed) {
				nums.pop_back();
			}
			else {
				nums.pop_front();
			}
		}
	}
	if(nums.size()==0) {
		cout << "[]\n";
		return ;
	}
	cout << "[";
	if(reversed) {
		while(!nums.empty()) {
			if(nums.size() == 1) {
				cout << nums.back() << "]";			
			}
			else {
				cout << nums.back() << ",";		
			}
			nums.pop_back();
		}
	}
	else {
		while(!nums.empty()) {
			if(nums.size() == 1) {
				cout << nums.front() << "]";			
			}
			else {
				cout << nums.front() << ",";		
			}
			nums.pop_front();
		}
	}
	cout << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t; 
	cin >> t;
	while(t--) {
		input();
		solve();
	}
	return 0;
}
// PM 05:22
