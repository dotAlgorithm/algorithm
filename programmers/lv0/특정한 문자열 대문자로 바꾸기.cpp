// authored by jihwankim
// 23-10-30 AM 04:56
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    int index = my_string.find(alp);
    while(index != string::npos) {
        my_string[index] = alp[0]-32;
        index = my_string.find(alp);
    }
    return my_string;
}
/*
alp�� �ش��ϴ� ��� ���ڸ� �빮�ڷ� �ٲپ��.
���� �ڵ� ���� �׳� ó������ ������ ��ȸ�ϸ鼭 ��Ī�ϸ� �� ����.
*/
// AM 04:58
