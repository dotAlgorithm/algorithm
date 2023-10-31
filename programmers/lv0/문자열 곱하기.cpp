// authored by jihwankim
// 23-10-31 AM 01:34
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) {
    string answer = "";
    while(k--) answer+=my_string;
    return answer;
}
// AM 01:35
