// authored by jihwankim
// 23-10-30 AM 07:11
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    for(int i = idx; i < arr.size(); i++) {
        if(arr[i]) return i;
    }
    return -1;
}
/*
arr�� ���Ҵ� 1 or 0, idx�� �־���
index�� idx���� ũ�鼭 arr�� ���� 1�� ���� ���� �ε����� ã�ƶ�. 
*/
// AM 07:12
