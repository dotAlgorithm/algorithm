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
���ڿ����� 'a', 'b', 'c'�� �����ڷ� ���ڿ��� ����.
1. ���ڸ� ������.
2. �����ڸ� ������ ���ڿ��� push��.
*/
// PM 10:37
