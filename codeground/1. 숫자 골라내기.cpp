/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

// 23-07-22 PM 04:30

#include <iostream>
#include <unordered_map>
#include <vector>
#define key first
#define value second

using namespace std;

int Answer;
int n;
unordered_map<int, int> m;
vector<int> v;

void input() {
    m.clear();
    v.clear();
    cin >> n;
    for(int i = 0; i<n; i++) {
        int num;
        cin >> num;
        if(m.find(num) != m.end()) m[num] += 1;
        else m[num] = 1;
    }
}

int solve() {
    for(auto &x : m) {
        if(x.value % 2 == 0) continue;
        v.push_back(x.first);
    }
    int num = v[0];
    for(int i = 1; i<v.size(); i++) {
    	num = (num ^ v[i]);
	}
	return num;
}

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
	int T, test_case;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using cin function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */	

	//freopen("input.txt", "r", stdin);

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
		Answer = 0;
		input();
		Answer = solve();
		// Print the answer to standard output(screen).
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}

// PM 04:53
