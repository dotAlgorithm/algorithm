// authored by jihwankim
// 23-10-30 AM 07:50
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    for(int i = 0; i < my_string.size(); i++) {
        if(my_string.substr(i) == is_suffix) return 1; 
    }
    return 0;
}
/*
접미사인지 확인
1. 모든 접미사를 구한다.
2. is_suffix와 비교한다.
3. 맞으면 1 리턴
*/
// AM 07:54
