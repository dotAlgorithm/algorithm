// authored by jihwankim
// 23-10-28 PM 10:30
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string str;
    for(char& c: myStr) {
        if(c == 'a' || c == 'b' || c == 'c') {
            if(!str.empty()) {
                answer.push_back(str);
                str.clear();
            }
        } else {
            str += c;
        }
    }
    
    if(!str.empty()) {
        answer.push_back(str);
    }
    
    if(answer.empty()) {
        answer.push_back("EMPTY");
    }
    
    return answer;
}
/*
문자열에서 'a', 'b', 'c'를 구분자로 문자열을 나눔.
1. 문자를 축적함.
2. 구분자를 만나면 문자열을 push함.
*/
// PM 10:37
