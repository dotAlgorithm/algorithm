// authored by jihwankim
// 23-10-30 AM 07:02
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    for(int i = 0; i < num_list.size(); i++) {
        if(num_list[i] < 0) return i;
    }
    return -1;
}
/*
num_list -> ù ��°�� ������ ������ �ε����� ���϶�.
*/
// AM 07:03
