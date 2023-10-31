// authored by jihwankim
// 23-10-30 AM 07:57
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    return my_string.substr(my_string.size()-n);
}
/*
my_string과 정수 n이 주어짐
my_string 뒤의 n글자로 이루어진 문자열을 반환
*/
// AM 07:58
