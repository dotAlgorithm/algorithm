// 23-07-29 AM 10:35
// authored by jihwankim
// codeground

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int Answer;
int n;
unordered_map<string, int> cycle;

vector<int> input() {
	cin >> n;
	vector<int> v(n);
	cycle.clear();
	string state = "";
	for(int i = 0; i<n; i++) {
		cin >> v[i];
		state+=to_string(v[i]);
	}
	cycle[state] = 0;
	return v;
}

void chk(vector<int> &copyv, vector<int> &v, int cnt) {
	vector<int> movev(n, 0);
	int size = movev.size();
	for(int i = 0; i<size; i++) {
		if(copyv[i] > 0) {
			if(i == size-1) movev[0] += 1;
			else movev[i+1] += 1;
			movev[i] += copyv[i]-1;
		}
	}
	string state = "";
	for(int i = 0; i<size; i++) {
		state+=to_string(movev[i]);
	}
	if(cycle.find(state) != cycle.end()) {
		Answer = cnt - cycle[state];
		return ;
	}
	cycle[state] = cnt;
	chk(movev, v, cnt+1);
}
void solve(vector<int> &v) {
	vector<int> copyv(v);
	chk(copyv, v, 1);
}

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int T, test_case;

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
		Answer = 0;
		vector<int> v = input();
		solve(v);
		
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}
