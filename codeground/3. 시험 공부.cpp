// codeground
// 23-07-22 PM 07:34
// authored by jihwankim
#include <iostream>
#include <algorithm>

using namespace std;

int Answer;

int n, k;
int arr[200005];

void input() {
	cin >> n >> k;
	for(int i = 0; i<n; i++) {
		cin >> arr[i];		
	}
	sort(arr, arr+n, [](int& a, int& b) {return a > b;});
}

int solve() {
	int sum = 0;
	for(int i = 0; i<k; i++) {
		sum+=arr[i];
	}	
	return sum;
}

int main(int argc, char** argv)
{
	int T, test_case;
	
	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0;
		input();
		Answer = solve();
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;
}
// PM 07:37
