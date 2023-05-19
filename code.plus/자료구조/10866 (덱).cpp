#include <bits/stdc++.h>

using namespace std;

deque<int> dq;
int n;
string inst;

void sort() {
	if (dq.empty() && (inst == "pop_front" 
	|| inst == "pop_back" || inst == "front" 
	|| inst == "back")) {
		cout << "-1\n";
		return;	
	}
	if(inst == "pop_front") {
		cout << dq.front() << "\n";
		dq.pop_front();
	}
	else if(inst == "pop_back") {
		cout << dq.back() << "\n";
		dq.pop_back();
	}
	else if(inst == "size") cout << dq.size() << "\n";
	else if(inst == "empty") cout << dq.empty() << "\n";
	else if(inst == "front") cout << dq.front() << "\n";
	else cout << dq.back() << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n;
	
	while(n--){
		cin >> inst;
		int num = 0;
		if(inst == "push_front") {
			cin >> num;
			dq.push_front(num);
		}
		else if(inst == "push_back"){
			cin >> num;
			dq.push_back(num);
		}
		else sort();
	}
	
	return 0;
}
