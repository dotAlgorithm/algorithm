// authored by jihwankim
// 23-10-31 AM 07:26
#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool mode = false;
    for(int i = 0; i < code.size(); i++) {
        if(code[i] == '1') mode = mode ? false : true;
        else if(i % 2 == mode) answer += code[i];
    }
    if(answer.empty()) answer = "EMPTY";
    return answer;
}
/*
문자열 code
1. 문자열의 문자가 "1"이면 mode를 바꿈.
2. mode는 0부터 시작함.
3. mode가 0일 때 짝수 idx를 추가
4. mode가 1일 때 홀수 idx를 추가
5. 빈 문자열이면 "EMPTY"
*/
// AM 07:35
