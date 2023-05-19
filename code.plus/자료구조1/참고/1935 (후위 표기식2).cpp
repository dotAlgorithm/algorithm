#include <bits/stdc++.h>

using namespace std;

int n;
string str;
stack<char> st;
vector<double> arr;

double cal(double a, double b, char op){
	return (op == '+') ? a+b : 
	(op == '-') ? a- b :
		(op=='/') ? a/b : a*b;
}
double recur(char op){
	if(!st.empty()){
		char ch = st.top();
		st.pop();
		if(ch >= 'A' && ch <= 'Z') {
			return arr[ch-'A'];
		}
		double b = recur(ch);
		double a = recur(ch);
		/*
		cout << "recurr check : " << a << ", "
		<< b << ", op : " << op << ", ch = " <<
		ch << ", cal -> " << cal(a, b, ch)
		<< "\n";*/
		
		return cal(a, b, ch);
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n;
	cin >> str;
	for(int i = 0; i<str.size(); i++) st.push(str[i]);
	while(n--){
		double num;
		cin >> num;
		arr.push_back(num);
	} 
	cout << fixed; 
	cout.precision(2);
	cout << recur(st.top());
	
	return 0;
}
