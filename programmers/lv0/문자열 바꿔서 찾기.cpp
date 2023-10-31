// authored by jihwankim
// 23-10-28 PM 10:46
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string myString, string pat) {
    for(char&c : myString) {
        if(c == 'A') {
            c = 'B';
        } else if(c == 'B') {
            c = 'A';
        }
    }
    // 찾지 못했을 경우 반환되는 객체 npos
    if(myString.find(pat) == std::string::npos) return 0;
    return 1;
}

/*
1. myString에서 'A'와 'B'를 서로 바꾼다.
2. myString에서 pat를 찾는다.
std::string::npos 활용
*/

// PM 10:56
