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
�̸��� ��� names 5�� list�� ����
�� �� ����� �̸��� ���
i+=5�� �ϸ� �� ����
*/
// AM 05:53
