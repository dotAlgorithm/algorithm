// authored by jihwankim
// 23-10-31 AM 01:19
#include <string>
#include <vector>
using namespace std;

int solution(string ineq, string eq, int n, int m) {
    if(ineq+eq == "<=") return n <= m;
    if(ineq+eq == ">=") return n >= m;
    if(ineq+eq == "<!") return n < m;
    return n > m;
}
/*
�� ���� n�� m
ineq, eq�� ���� ��� ��ȯ
*/
// AM 01:23
