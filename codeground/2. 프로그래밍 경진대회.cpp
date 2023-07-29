/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/
// 23-07-22 PM 04:55

#include <iostream>
#include <algorithm>

using namespace std;

int maxScore;
int Answer;
int n;
int arr[300005];

void input() {
    cin >> n;
    for(int i = 0; i<n; i++) cin >> arr[i];
    maxScore = 0;
    //5 6   7  9
    //9 10 11  13
    //6 7   8  10
    // 가장 큰 값 + 1 <= arr[i]+n 일 때 만족?
    // 5  6  9  9 를 생각해보자.
    // 9 10 13 13
    // 6  7 10 10
    // n이 매우 큰 수면?
    // 5 9 9 9 .... 9가 10만개
    // 5+10만 , 9+99999, 9+1
    // 9+99999 > 5+100000 이므로 정당성 성립 X
}

int solve() {
    int cnt = 0;
    sort(arr, arr+n);
    for(int i = n-1; i>=0; i--) {
        maxScore = max(maxScore, arr[n-i-1]+(i+1));
    }    
    for(int i = 0; i<n; i++) {
        if(arr[i]+n >= maxScore) {
            cnt++;
        }
    }
    return cnt;
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

	// freopen("input.txt", "r", stdin);

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0;
		input();
		Answer = solve();
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << "\n";
	}

	return 0;//Your program should return 0 on normal termination.
}
