// 23-07-28 PM 04:49
// authored by jihwankim
// codeground

#include <iostream>

using namespace std;

int Answer;

int n;
int a, b;

void input() {
	cin >> n >> a >> b;
}

void solve() {
	int temp = max(a, b);
	a = min(a, b);
	b = temp;
	
	Answer = n/a;
	n = n%a;
	if(n == 0) return;
	while(n%b) {
		Answer--;
		n+=a;
	} 
	Answer += n/b;
}

int main(int argc, char** argv)
{
	int T, test_case;
	
	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0;

		input();
		solve();

		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;
}
