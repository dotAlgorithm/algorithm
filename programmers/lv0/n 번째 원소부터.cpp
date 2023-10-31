// authored by jihwankim
// 23-10-30 AM 06:15
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer(num_list.begin() + n - 1, num_list.end());
    return answer;
}
/*
num_list, n
n번째 원소부터 마지막 원소까지 담은 리스트
assign 알아보기
decltype도 알아보기. 
*/
// AM 06:16
