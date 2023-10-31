// authored by jihwankim
// 23-10-31 AM 07:26
#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool mode = false;
    for(int i = 0; i < code.size(); i++) {
        if(code[i] == '1') mode = mode ? false : true;
        else if(i % 2 == mode) answer += code[i];
    }
    if(answer.empty()) answer = "EMPTY";
    return answer;
}
/*
���ڿ� code
1. ���ڿ��� ���ڰ� "1"�̸� mode�� �ٲ�.
2. mode�� 0���� ������.
3. mode�� 0�� �� ¦�� idx�� �߰�
4. mode�� 1�� �� Ȧ�� idx�� �߰�
5. �� ���ڿ��̸� "EMPTY"
*/
// AM 07:35
