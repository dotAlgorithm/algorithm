// authored by jihwankim
// 23-10-31 AM 07:36
#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    for(auto x : included) {
        if(x) answer += a;
        a += d;
    }
    return answer;
}
/*
정수 a, b와 길이가 n인 배열 included가 존재
등차수열 = 첫째항이 a, 공차가 d
included는 a_1 ~ a_n, 이 때 true인 것만 더함.
*/
// AM 07:39
