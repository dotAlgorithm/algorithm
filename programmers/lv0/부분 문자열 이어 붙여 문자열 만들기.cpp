// authored by jihwankim
// 23-10-30 AM 07:58
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for(int i = 0; i < parts.size(); i++) {
        int s = parts[i][0];
        int e = parts[i][1] - s + 1;
        answer += my_strings[i].substr(s, e);
    }
    return answer;
}
/*
길이가 같은 (문자열 배열 my_strings와 이차원 정수 배열 parts)가 주어짐.
parts[i]는 my_strings[i]의 s~e까지 부분 문자열을 의미함.
1. parts[i]만큼 my_strings[i]의 부분문자열을 구한다.
2. 모든 부분문자열들을 합쳐서 출력한다.
*/
// AM 08 : 04
