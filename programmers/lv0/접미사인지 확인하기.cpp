// authored by jihwankim
// 23-10-30 AM 07:50
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    for(int i = 0; i < my_string.size(); i++) {
        if(my_string.substr(i) == is_suffix) return 1; 
    }
    return 0;
}
/*
���̻����� Ȯ��
1. ��� ���̻縦 ���Ѵ�.
2. is_suffix�� ���Ѵ�.
3. ������ 1 ����
*/
// AM 07:54
