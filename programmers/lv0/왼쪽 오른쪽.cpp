// authored by jihwankim
// 23-10-30 AM 06:00
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    auto start = str_list.begin(), end = str_list.end();
    for(int i = 0; i < str_list.size(); i++) {
        if(str_list[i] == "l") {
            end = start + i;
            break;
        }
        if(str_list[i] == "r") {
            start = start + i + 1;
            break;
        }
    }
    vector<string> answer(start, end);
    if(start == str_list.begin() && end == str_list.end()) {
        answer.clear();
    }
    return answer;
}
/*
str_list에는 4개의 문자열들이 저장되어 있음.
l이 먼저 나오면 왼쪽에 있는 문자열들을 순서대로 담음.
r이 먼저 나오면 오른쪽에 있는 문자열들을 순서대로 담음
아무것도 없다면 빈 리스트
*/
// AM 06:06
