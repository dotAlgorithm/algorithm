// authored by jihwankim
// 23-10-30 AM 07:14
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer;
    vector<bool> visited(101, false);
    for(int x : indices) {
        visited[x] = true;
    }
    for(int i = 0; i < my_string.size(); i++) {
        if(visited[i]) continue;
        answer += my_string[i];
    }
    return answer;
}
/*
my_string 문자열과 정수 배열 indices가 있다.
1. my_string에서 indices의 원소에 해당하는 인덱스의 글자를 지우기
-> substr로 해결
*/
// AM 07:25
