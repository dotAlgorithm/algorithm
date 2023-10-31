// authored by jihwankim
// 23-10-29 AM 03:06
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string myString, string pat) {
    int start = 0;
    int answer = 0;
    while(myString.size() >= pat.size()) {
        /*
        string substr = myString.substr(start);
        myString = substr;
        int index = substr.find(pat);
        if(index != string::npos) {
            start = index+1;
            answer++;
        } else {
            break;
        }
        */
        start = myString.find(pat, start);
        if(start == string::npos) break;
        start++;
        answer++;
    }
    return answer;
}
/*
1. 문자열을 myString[0]~myString[end] 까지 설정
2. myString에서 ana를 발견하면 시작 문자열을 찾은 부분 다음 index로 수정
3. myString에서 ana를 발견하지 못하면 종료
*/
// AM 03:22
