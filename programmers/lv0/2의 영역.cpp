// authored by jihwankim
// 230-10-30 AM 06:48
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 2) answer.push_back(i);
    }
    if(answer.empty()) return {-1};
    return vector<int>(arr.begin()+answer.front(), arr.begin()+answer.back()+1);
}
/*
arr���� 2�� ��� ���Ե� ���� ���� ���� �κ� �迭�� ã��
1. 2�� ������ ����.
2. 2�� ������ŭ 2�� ������ ��� ���Ҹ� answer�� �߰��Ѵ�.
*/
// AM 06:53
