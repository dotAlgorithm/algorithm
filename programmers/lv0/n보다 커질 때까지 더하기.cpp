// authored by jihwankim
// 23-10-30 AM 05:35
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    for(int& x : numbers) {
        answer+=x;
        if(answer > n) break;
    }
    return answer;
}
/*
�����迭 numbers, ���� n
i = 0���� ���ϴٰ� n�� �ʰ��ϴ� ���� return
*/
// AM 05:36
