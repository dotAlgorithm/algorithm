// authored by jihwankim
// 23-10-30 AM 07:42
#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    if(my_string[0] == is_prefix[0] && my_string.find(is_prefix) == 0) {
        return 1;
    }
    return 0;
}
/*
banana�� ��� ���λ�� "b", "ba", "ban", ...
my_string�� is_prefix�� �־��� ��,
is_prefix�� my_string�� ���λ����� Ȯ���϶�.
������ 1 �ƴϸ� 0
*/
// AM 07:47
