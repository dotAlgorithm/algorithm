// authored by jihwankim
// 23-10-31 AM 11:24
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string ms, vector<vector<int>> queries) {
    for(auto q: queries) reverse(ms.begin()+q[0], ms.begin()+q[1]+1);
    return ms;
}
// AM 11:26
