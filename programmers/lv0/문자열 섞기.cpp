// authored by jihwankim
// 23-10-31 AM 07:16
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    for(int i = 0; i < str1.size(); i++) {
        answer += str1[i];
        answer += str2[i];
    }
    return answer;
}
// AM 07:22
