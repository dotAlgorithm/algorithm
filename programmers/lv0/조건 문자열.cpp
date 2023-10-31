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
두 수가 n과 m
ineq, eq에 따른 결과 반환
*/
// AM 01:23
