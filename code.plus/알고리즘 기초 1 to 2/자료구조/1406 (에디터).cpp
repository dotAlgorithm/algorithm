#include <bits/stdc++.h>

using namespace std;

string str;
stack<char> st1;
stack<char> st2;
int n;

void sort(char inst, char cn) {
	if(inst == 'P') st1.push(cn);
	
	if(!st1.empty() && inst == 'L') {
		st2.push(st1.top());
		st1.pop();
	}
	if(!st1.empty() && inst == 'B') st1.pop();
	
	if(!st2.empty() && inst == 'D'){
		st1.push(st2.top());
		st2.pop();
	}
}
int main() {
	cin >> str;
	for(int i = 0; i<str.size(); i++) st1.push(str[i]);
	cin >> n;
	
	while(n--){
		char inst;
		cin >> inst;
		char cn = ' ';
		if(inst == 'P') cin >> cn;
		sort(inst, cn);
	}
	while(!st1.empty()){
		st2.push(st1.top());
		st1.pop();
	}
	while(!st2.empty()) {
		cout << st2.top();
		st2.pop();
	}
	
	return 0;
}
