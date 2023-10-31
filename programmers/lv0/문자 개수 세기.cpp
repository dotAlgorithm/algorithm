// authored by jihwankim
// 23-10-30 AM 07:29
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    for(char c: my_string) {
        if(c >= 'a' && c <= 'z') {
            answer[c-'a'+26]++;
        } else {
            answer[c-'A']++;
        }
    }
    return answer;
}
/*
대소문자로만 이루어진 문자열 my_string
각 알파벳의 개수를 순서대로 담아라.
*/
// AM 07:32
