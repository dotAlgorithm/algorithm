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
Ȧ����°�� ���ڿ� -> �빮��
¦����°�� ���ڿ� -> �ҹ���
�������� transform ����غ���. 
*/
// AM 05:09
