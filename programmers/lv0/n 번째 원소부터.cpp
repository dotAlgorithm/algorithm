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
n��° ���Һ��� ������ ���ұ��� ���� ����Ʈ
assign �˾ƺ���
decltype�� �˾ƺ���. 
*/
// AM 06:16
