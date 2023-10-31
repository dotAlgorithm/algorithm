// authored by jihwankim
// 23-10-31 AM 11:03
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(n);
    while(n != 1) {
        if(n % 2) n = 3 * n + 1;
        else n = n / 2;
        answer.push_back(n);
    }
    return answer;
}
/*
1. ���� �� x�� ¦���� �� 2�� ������
2. ���� �� x�� Ȧ���� ���� 3*x+1�� �ٲ۴�.
���� �ݺ��ϸ� x�� ������ �ݵ�� 1�� �ȴ� (�ݶ��� ����)
�ݶ��� �������� ��� ���� ����� ������ �ݶ��� �����̶�� �Ѵ�.
*/
// AM 11:06
