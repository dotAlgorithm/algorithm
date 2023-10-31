// authored by jihwankim
// 23-10-31 AM 10:15
#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<int> numLog) {
    string answer;
    map<string, char> m = {{"1", 'w'}, {"-1", 's'}, {"10", 'd'}, {"-10", 'a'}};
    for(int i = 1; i < numLog.size(); i++) {
        answer += m[to_string(numLog[i]-numLog[i-1])];
    }
    return answer;
}
// AM 10:20
