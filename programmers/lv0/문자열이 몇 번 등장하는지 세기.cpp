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
1. ���ڿ��� myString[0]~myString[end] ���� ����
2. myString���� ana�� �߰��ϸ� ���� ���ڿ��� ã�� �κ� ���� index�� ����
3. myString���� ana�� �߰����� ���ϸ� ����
*/
// AM 03:22
