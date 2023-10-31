// authored by jihwankim
// 23-10-30 AM 05:35
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    for(int& x : numbers) {
        answer+=x;
        if(answer > n) break;
    }
    return answer;
}
/*
정수배열 numbers, 정수 n
i = 0부터 더하다가 n을 초과하는 순간 return
*/
// AM 05:36
