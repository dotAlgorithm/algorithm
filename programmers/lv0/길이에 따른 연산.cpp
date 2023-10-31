// authored by jihwankim
// 23-10-30 AM 05:14
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> n) {
    if(n.size() > 10) return accumulate(n.begin(), n.end(), 0);
    return accumulate(n.begin(), n.end(), 1,  multiplies<int>());
}
/*
리스트의 길이가 11 이상 -> sum
10 이하 -> mul
*/
// AM 05:18
