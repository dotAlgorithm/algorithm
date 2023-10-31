// authored by jihwankim
// 23-10-30 AM 05:02
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    for(int i = 0; i < strArr.size(); i++) {
        for(char &c: strArr[i]) {
            if(i%2) c = toupper(c);
            else c = tolower(c);
        }
    }
    return strArr;
}
/*
홀수번째의 문자열 -> 대문자
짝수번째의 문자열 -> 소문자
다음번엔 transform 사용해보기. 
*/
// AM 05:09
