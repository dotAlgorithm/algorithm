// authored by jihwankim
// 23-10-29 AM 03:04
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(string& s: strArr) {
        if(s.find("ad") == string::npos) {
            answer.push_back(s);
        }
    }
    return answer;
}
/*
1. ���ڿ� "ad"�� ���ԵǾ����� ������ answer�� push
*/
// AM 03:05
