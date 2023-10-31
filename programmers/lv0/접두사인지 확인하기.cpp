// authored by jihwankim
// 23-10-30 AM 07:42
#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    if(my_string[0] == is_prefix[0] && my_string.find(is_prefix) == 0) {
        return 1;
    }
    return 0;
}
/*
banana의 모든 접두사는 "b", "ba", "ban", ...
my_string과 is_prefix가 주어질 때,
is_prefix가 my_string의 접두사인지 확인하라.
맞으면 1 아니면 0
*/
// AM 07:47
