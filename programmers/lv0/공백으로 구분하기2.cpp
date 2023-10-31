// authored by jihwankim
// 23-10-28 PM 11:38
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    stringstream stream;
    stream.str(my_string);
    
    while(stream >> my_string) {
        answer.push_back(my_string);
    }
    return answer;
}
/*
공백을 기준으로 구분 -> sstream
*/
// PM 11:38
