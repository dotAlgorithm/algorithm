//authored by jihwankim
//23-10-29 AM 03:26
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString, string pat) {
    reverse(myString.begin(), myString.end());
    reverse(pat.begin(), pat.end());
    string answer = myString.substr(myString.find(pat));
    reverse(answer.begin(), answer.end());
    return answer;
}
/*
���� pat�� ������ ���ü��� ������ ���� �������κи� ã����ȴ�.
���ڿ��� pat�� �������� ������ �κ��� ���ۺκ��� ��.
#�߰� rfind() ��� �Լ��� �ڿ������� �˻��Ѵٰ� �Ѵ�. ����
*/
// AM 03:30
