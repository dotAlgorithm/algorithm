// authored by jihwankim
// 23-10-31 AM 01:24
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int odd = 0;
    int even = 0;
    for(int i = 1; i <= n; i ++) {
        if(i%2) odd += i;
        else even += i * i;
    }
    return (n % 2) ? odd : even;
}
/*
n -> odd, n���� Ȧ�� ������ ��
n -> even, n���� ¦�� ���� ������ ��
*/
// AM 01:26
