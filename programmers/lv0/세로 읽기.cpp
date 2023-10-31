// authored by jihwankim
// 23-10-30 AM 07:34
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    if(m == c) c = 0;
    string answer = "";
    for(int i = 0; i<my_string.size(); i++) {
        if((i+1) % m == c) answer += my_string[i];
    }
    return answer;
}
/*
my_string과 두 정수 m, c
1. my_string을 한 줄에 m 글자씩 가로로 적는다.
2. 왼쪽부터 세로로 c번째 열에 적힌 글자들을 문자열로 반환
*/
// AM 07:38
