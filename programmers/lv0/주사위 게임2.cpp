// authored by jihwankim
// 23-10-31 AM 07:40
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    if(a != b && b != c && a != c) answer = (a+b+c);
    else if(a == b && b != c && a != c) answer = (a*2+c) * (a*a*2+c*c);
    else if(a != b && b == c && a != c) answer = (a+b*2) * (a*a+b*b*2);
    else if(a != b && b != c && a == c) answer = (b+c*2) * (b*b+c*c*2);
    else answer = (a*3) * (a*a*3) * (a*a*a*3);
    return answer;
}
/*
1~6까지 적힌 주사위가 세 개
각 주사위에서 나온 숫자를 a, b, c
1. a, b, c가 모두 다를 때 a + b + c
2. 두 숫자는 같고 나머지 숫자는 다르다면 (a + b + c) * (a^2 + b^2 + c^2)
3. 세숫자가 모두 같다면 (a + b + c) * (a^2 + b^2 + c^2) * (a^3 + b^3 + c^3)
-> set 또는 집합개념 사용해보기 
*/
// AM 07:54
