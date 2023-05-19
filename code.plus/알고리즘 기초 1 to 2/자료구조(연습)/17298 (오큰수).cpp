#include <bits/stdc++.h>

using namespace std;

int n;
stack<int> st;
vector<int> arr;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n;
	for(int i = 0; i<n; i++){
		int num;
		cin >> num;
		arr.push_back(num);
	}
	int idx = arr.size();
	while(idx--){
		int val = arr[idx];
		while(!st.empty() && st.top() <= val) {
			st.pop();	
		}
		if(!st.empty() && st.top() > val) {
			arr[idx] = st.top();
		}
		else arr[idx] = -1;
		st.push(val);
		
	}
	
	for(int i = 0;i<arr.size(); i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}

/*
3 5 2 7
마지막 값 = 스택 비어있을 때 = -1
마지막 - n 값  = 스택이 저장되어있음.
-> 마지막 - n 보다 스택 탑이 적을 경우 pop
-> 그렇지 않을 경우 arr[마지막-n] = 스택탑
*/
