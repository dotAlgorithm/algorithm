#include <bits/stdc++.h>

using namespace std;

int n;
stack<int> stc;

void func(string op, int num){
	if(op=="push") stc.push(num);
	if(op=="pop") {
		if(stc.empty()) cout << "-1\n";
		else{	
			cout << stc.top() << "\n";
			stc.pop();	
		}	
	}
	if(op=="top") {
		if(stc.empty()) cout << "-1\n";
		else cout << stc.top() << "\n";
	}
	if(op=="empty") cout << stc.empty() << "\n";
	if(op=="size") cout << stc.size() << "\n";
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	cin >> n;
	
	for(n;n>0;n--){
		int num = 0;
		string op;
		cin >> op;
		if(op == "push") cin >> num;
		func(op, num);
	}
	return 0;
}
