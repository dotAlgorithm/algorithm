// authored by jihwankim
// 23-10-31 AM 11:20
#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for(char c:number) {
        answer += (c-'0');
    }
    return answer%9;
}
/*
���� �ƴ� ������ 9�� ���� ������ =
������ �� �ڸ� ������ ���� 9�� ���� �������� 
*/
// AM 11:22
