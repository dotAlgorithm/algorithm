// authored by jihwankim
// 23-10-30 AM 07:13
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start, int end_num) {
    vector<int> answer;
    for(start; start >= end_num; start--) {
        answer.push_back(start);
    }
    return answer;
}
/*
start_num과 end_num이 주어짐.
start_num -> end_num까지 값을 구하라
*/
// AM 07:14
