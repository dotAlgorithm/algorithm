// authored by jihwankim
// 23-10-30 AM 05:30
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    for(int& x : arr) {
        if(x % 2 && x < 50) {
            x = x * 2;
        } else if(!(x % 2) && x >= 50) {
            x = x / 2;
        } 
    }
    return arr;
}
/*
�迭 arr �� ���� ���� 50 �̻��� ¦�� -> 2�� ����
50���� ���� Ȧ�� -> 2�� ����.
�� �۾��� x������ �� arr[x]
*/
// AM 05:31
