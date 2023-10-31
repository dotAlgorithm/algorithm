// authored by jihwankim
// 23-10-28 PM 11:30
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int count = 0;
    for(char &c : myString) {
        if(c == 'x') {
            answer.push_back(count);
            count = 0;
        } else {
            count++;
        }
    }
    answer.push_back(count);
    return answer;
}

/*
sstream은 구분자 사이의 길이를 알 수 없음.
1. 문자열 순회하면서 count 증가
2. x를 만날 때마다 벡터에 push, count 초기화
3. 다 끝나고 나서 남은 문자만큼 push
*/
// PM 11:36
