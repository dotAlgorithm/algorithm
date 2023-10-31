// authored by jihwankim
// 23-10-30 AM 07:58
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for(int i = 0; i < parts.size(); i++) {
        int s = parts[i][0];
        int e = parts[i][1] - s + 1;
        answer += my_strings[i].substr(s, e);
    }
    return answer;
}
/*
���̰� ���� (���ڿ� �迭 my_strings�� ������ ���� �迭 parts)�� �־���.
parts[i]�� my_strings[i]�� s~e���� �κ� ���ڿ��� �ǹ���.
1. parts[i]��ŭ my_strings[i]�� �κй��ڿ��� ���Ѵ�.
2. ��� �κй��ڿ����� ���ļ� ����Ѵ�.
*/
// AM 08 : 04
