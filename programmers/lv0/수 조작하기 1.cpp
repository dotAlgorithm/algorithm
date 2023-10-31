// authored by jihwankim
// 23-10-31 AM 10:12
#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    for(char c: control) {
        if(c == 'w') n++;
        else if(c == 's') n--;
        else if(c == 'd') n+=10;
        else n-=10;
    }
    return n;
}
/*
정수 n과 문자열 control
control -> "w", "a", "s", "d"
w : ++n, s : --n, d : n+=10, a : n-=10
마지막에 나오는 n의 값
*/
// AM 10:14
