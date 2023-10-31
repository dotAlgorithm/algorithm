// authored by jihwankim
// 23-10-30 AM 07:32
#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    for(int i = 0; i < code.size(); i++) {
        if(i%q == r) answer+=code[i];
    }
    return answer;
}
/*
정수 q, r과 문자열 code가 주어짐.
1. code의 각 인덱스를 q로 나눈다.
2. 나머지가 r인 위치의 문자를 찾는다.
3. 2번의 문자를 앞에서부터 순서대로 이어붙인 문자열은 반환
*/
// AM 07:33
