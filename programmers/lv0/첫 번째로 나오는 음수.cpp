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
num_list -> 첫 번째로 나오는 음수의 인덱스를 구하라.
*/
// AM 07:03
