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
start_num�� end_num�� �־���.
start_num -> end_num���� ���� ���϶�
*/
// AM 07:14
