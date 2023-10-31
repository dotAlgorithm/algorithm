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
모든 원소들의 곱 < 모든 원솝들의 합의 제곱
*/
// AM 09:58
