// authored by jihwankim
// 23-10-30 AM 07:34
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    if(m == c) c = 0;
    string answer = "";
    for(int i = 0; i<my_string.size(); i++) {
        if((i+1) % m == c) answer += my_string[i];
    }
    return answer;
}
/*
my_string�� �� ���� m, c
1. my_string�� �� �ٿ� m ���ھ� ���η� ���´�.
2. ���ʺ��� ���η� c��° ���� ���� ���ڵ��� ���ڿ��� ��ȯ
*/
// AM 07:38
