// authored by jihwankim
// 23-10-30 AM 05:22
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 1;
    int before = 0;
    while(before != answer) {
        bool chk = false;
        for(int& x : arr) {
            if(x % 2 && x < 50) {
                chk = true;
                x = x * 2 + 1;
            } else if(!(x % 2) && x >= 50) {
                chk = true;
                x = x / 2;
            } 
        }
        if(chk) answer++;
        before++;
    }
    return answer-1;
}
/*
�迭 arr �� ���� ���� 50 �̻��� ¦�� -> 2�� ����
50���� ���� Ȧ�� -> 2�� ���ϰ� 1�� ����.
�� �۾��� x������ �� arr[x]
*/
// AM 05:29
