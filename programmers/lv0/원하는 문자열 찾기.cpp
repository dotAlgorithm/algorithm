// authored by jihwankim
// 23-10-30 AM 05:11
#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    for(char &c: myString) c = tolower(c);
    for(char &c: pat) c = tolower(c);
    if(myString.find(pat) != string::npos) return 1;
    return 0;
}
/*
��� ���ڸ� �ҹ��ڷ� �����ؼ� ã��
*/
// AM 05:13
