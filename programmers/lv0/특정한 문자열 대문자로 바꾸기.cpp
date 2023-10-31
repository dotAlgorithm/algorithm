// authored by jihwankim
// 23-10-30 AM 04:56
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    int index = my_string.find(alp);
    while(index != string::npos) {
        my_string[index] = alp[0]-32;
        index = my_string.find(alp);
    }
    return my_string;
}
/*
alp에 해당하는 모든 문자를 대문자로 바꾸어라.
현재 코드 별로 그냥 처음부터 끝까지 순회하면서 매칭하면 더 좋음.
*/
// AM 04:58
