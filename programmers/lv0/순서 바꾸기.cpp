// authored by jihwankim
// 23-10-30 AM 06:11
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer(num_list.begin()+n, num_list.end());
    for(int i = 0; i < n; i++) {
        answer.push_back(num_list[i]);
    }
    return answer;
}
/*
num_list���� n��°���� ���ҵ��� n��° ���Ҿտ� ����
rotate, insert�� �̿��� ����� ���� �˻��غ���. 
*/
// AM 06:13
