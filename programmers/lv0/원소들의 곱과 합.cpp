// authored by jihwankim
// 23-10-31 AM 09:54
#include <string>
#include <vector>
#include <numeric>
#define b begin()
#define e end()
using namespace std;

int solution(vector<int> n) {
    int sum = accumulate(n.b, n.e, 0);
    return accumulate(n.b, n.e, 1, multiplies<int>()) < sum*sum;
}
/*
num_list
��� ���ҵ��� �� < ��� ���ٵ��� ���� ����
*/
// AM 09:58
