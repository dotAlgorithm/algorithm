// authored by jihwankim
// 23-10-31 AM 10:44
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i = l; i<=r; i++) {
        bool chk = false;
        for(char c: to_string(i)) {
            if(!(c == '5' || c == '0')) {
                chk = true;
                break;
            }
        }
        if(!chk) answer.push_back(i);
    }
    if(answer.empty()) answer.push_back(-1);
    return answer;
}
// AM 11:00
