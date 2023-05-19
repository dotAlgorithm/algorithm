#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> F;
vector<int> arr;
vector<int> ngf;
stack<int> st;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n;
	while(n--){
		int num;
		cin >> num;
		int size = F.size();
		while(size++ <= num) {
			F.push_back(0);
		}
		ngf.push_back(0);
		arr.push_back(num);
		F[num]++;
	}
	int size = arr.size();
	while(size--){
		ngf[F[arr[size]]] = arr[size];
		arr[size] = F[arr[size]];
		
		int val = arr[size];
		
		while(!st.empty() && st.top() <= val) st.pop();
		if(!st.empty() && st.top() > val) arr[size] = ngf[st.top()];
		if(st.empty()) arr[size] = -1;
		st.push(val);
	}
	for(int i = 0; i<arr.size(); i++) cout << arr[i] <<" ";
		
	return 0;
}
