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
num_list�� n�� �־���.
ó�� -> ������ n�� �������� ����Ǿ� �ִ� ����Ʈ�� ���
*/
// AM 05:57
