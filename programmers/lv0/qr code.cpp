// authored by jihwankim
// 23-10-30 AM 07:32
#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    for(int i = 0; i < code.size(); i++) {
        if(i%q == r) answer+=code[i];
    }
    return answer;
}
/*
���� q, r�� ���ڿ� code�� �־���.
1. code�� �� �ε����� q�� ������.
2. �������� r�� ��ġ�� ���ڸ� ã�´�.
3. 2���� ���ڸ� �տ������� ������� �̾���� ���ڿ��� ��ȯ
*/
// AM 07:33
