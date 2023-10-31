// authored by jihwankim
// 23-10-28 PM 11:30
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int count = 0;
    for(char &c : myString) {
        if(c == 'x') {
            answer.push_back(count);
            count = 0;
        } else {
            count++;
        }
    }
    answer.push_back(count);
    return answer;
}

/*
sstream�� ������ ������ ���̸� �� �� ����.
1. ���ڿ� ��ȸ�ϸ鼭 count ����
2. x�� ���� ������ ���Ϳ� push, count �ʱ�ȭ
3. �� ������ ���� ���� ���ڸ�ŭ push
*/
// PM 11:36
