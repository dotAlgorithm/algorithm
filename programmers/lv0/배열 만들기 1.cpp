// authored by jihwankim
// 23-10-30 AM 07:27
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    for(int i = 1; i <= n; i++) {
        if(i%k == 0) answer.push_back(i);
    }
    return answer;
}
/*
���� n�� k�� �־���. 
1. 1�̻� n ������ ������ Ž��
2. k�� ����� ������������ ����.
*/
// AM 07:28
