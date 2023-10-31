// authored by jihwankim
// 23-10-28 PM 11:21
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    for(char &c : myString) {
        if(c == 'x') {
            c = ' ';
        }
    }
    stringstream stream;
    stream.str(myString);
    string ch;
    while(stream >> ch) {
        answer.push_back(ch);
    }
    sort(answer.begin(), answer.end());
    return answer;
}
/*
sstream 헤더 사용해보기 -> stringstream : ' '과 '\n'를 구분자로 split
1. x -> ' '
2. stringstream
3. split된 각 문자를 삽입
4. 정렬
*/
// PM 11:28
