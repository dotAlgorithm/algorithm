// authored by jihwankim
// 23-10-31 AM 10:12
#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    for(char c: control) {
        if(c == 'w') n++;
        else if(c == 's') n--;
        else if(c == 'd') n+=10;
        else n-=10;
    }
    return n;
}
/*
���� n�� ���ڿ� control
control -> "w", "a", "s", "d"
w : ++n, s : --n, d : n+=10, a : n-=10
�������� ������ n�� ��
*/
// AM 10:14
