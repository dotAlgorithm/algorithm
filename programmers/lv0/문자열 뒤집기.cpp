// authored by jihwankim
// 23-10-30 AM 07:39
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e) {
    reverse(my_string.begin()+s, my_string.begin()+e+1);
    return my_string;
}
/*
my_string�� ���� s, e�� �־���
s ~ e������ ������ ���ڿ��� return
*/
// AM 07:41
