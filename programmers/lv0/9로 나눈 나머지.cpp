// authored by jihwankim
// 23-10-31 AM 11:20
#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for(char c:number) {
        answer += (c-'0');
    }
    return answer%9;
}
/*
음이 아닌 정수를 9로 나눈 나머지 =
정수의 각 자리 숫자의 합을 9로 나눈 나머지와 
*/
// AM 11:22
