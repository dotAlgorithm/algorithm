// authored by jihwankim
// 23-10-30 AM 07:29
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    for(char c: my_string) {
        if(c >= 'a' && c <= 'z') {
            answer[c-'a'+26]++;
        } else {
            answer[c-'A']++;
        }
    }
    return answer;
}
/*
��ҹ��ڷθ� �̷���� ���ڿ� my_string
�� ���ĺ��� ������ ������� ��ƶ�.
*/
// AM 07:32
