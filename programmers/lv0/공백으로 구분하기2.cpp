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
������ �������� ���� -> sstream
*/
// PM 11:38
