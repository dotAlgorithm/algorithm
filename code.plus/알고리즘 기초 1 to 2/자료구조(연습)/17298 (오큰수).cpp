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
������ �� = ���� ������� �� = -1
������ - n ��  = ������ ����Ǿ�����.
-> ������ - n ���� ���� ž�� ���� ��� pop
-> �׷��� ���� ��� arr[������-n] = ����ž
*/
