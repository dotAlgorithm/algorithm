// authored by jihwankim
// 23-10-31 AM 11:03
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(n);
    while(n != 1) {
        if(n % 2) n = 3 * n + 1;
        else n = n / 2;
        answer.push_back(n);
    }
    return answer;
}
/*
1. 현재 값 x가 짝수일 때 2로 나누고
2. 현재 값 x가 홀수일 때는 3*x+1로 바꾼다.
위를 반복하면 x는 언젠가 반드시 1이 된다 (콜라츠 문제)
콜라츠 문제에서 모든 수를 기록한 수열을 콜라츠 수열이라고 한다.
*/
// AM 11:06
