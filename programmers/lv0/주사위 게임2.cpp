// authored by jihwankim
// 23-10-31 AM 07:40
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    if(a != b && b != c && a != c) answer = (a+b+c);
    else if(a == b && b != c && a != c) answer = (a*2+c) * (a*a*2+c*c);
    else if(a != b && b == c && a != c) answer = (a+b*2) * (a*a+b*b*2);
    else if(a != b && b != c && a == c) answer = (b+c*2) * (b*b+c*c*2);
    else answer = (a*3) * (a*a*3) * (a*a*a*3);
    return answer;
}
/*
1~6���� ���� �ֻ����� �� ��
�� �ֻ������� ���� ���ڸ� a, b, c
1. a, b, c�� ��� �ٸ� �� a + b + c
2. �� ���ڴ� ���� ������ ���ڴ� �ٸ��ٸ� (a + b + c) * (a^2 + b^2 + c^2)
3. �����ڰ� ��� ���ٸ� (a + b + c) * (a^2 + b^2 + c^2) * (a^3 + b^3 + c^3)
-> set �Ǵ� ���հ��� ����غ��� 
*/
// AM 07:54
