// authored by jihwankim
// 23-10-31 AM 07:36
#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    for(auto x : included) {
        if(x) answer += a;
        a += d;
    }
    return answer;
}
/*
���� a, b�� ���̰� n�� �迭 included�� ����
�������� = ù°���� a, ������ d
included�� a_1 ~ a_n, �� �� true�� �͸� ����.
*/
// AM 07:39
