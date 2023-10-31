// authored by jihwankim
// AM 23-10-30 AM 05:52
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;
    for(int i = 0; i < names.size(); i++) {
        if(i%5 == 0) answer.push_back(names[i]);
    } 
    return answer;
}
/*
이름이 담긴 names 5명씩 list에 담음
맨 앞 사람의 이름을 출력
i+=5를 하면 더 쉬움
*/
// AM 05:53
