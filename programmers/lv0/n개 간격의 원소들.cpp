// authored by jihwankim
// 23-10-30 AM 05:56
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    for(int i = 0; i < num_list.size(); i+=n) answer.push_back(num_list[i]);
    return answer;
}
/*
num_list와 n이 주어짐.
처음 -> 마지막 n개 간격으로 저장되어 있는 리스트를 출력
*/
// AM 05:57
