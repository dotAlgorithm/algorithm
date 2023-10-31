// authored by jihwankim
// 23-10-30 AM 06:00
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    auto start = str_list.begin(), end = str_list.end();
    for(int i = 0; i < str_list.size(); i++) {
        if(str_list[i] == "l") {
            end = start + i;
            break;
        }
        if(str_list[i] == "r") {
            start = start + i + 1;
            break;
        }
    }
    vector<string> answer(start, end);
    if(start == str_list.begin() && end == str_list.end()) {
        answer.clear();
    }
    return answer;
}
/*
str_list���� 4���� ���ڿ����� ����Ǿ� ����.
l�� ���� ������ ���ʿ� �ִ� ���ڿ����� ������� ����.
r�� ���� ������ �����ʿ� �ִ� ���ڿ����� ������� ����
�ƹ��͵� ���ٸ� �� ����Ʈ
*/
// AM 06:06
