// authored by jihwankim
// 23-10-30 AM 05:54
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int even = 0;
    int odd = 0;
    for(int i = 0; i < num_list.size(); i++) {
        if(i%2) odd += num_list[i];
        else even += num_list[i];
    } 
    return (odd > even) ? odd : even;
}
/*
num_list에서 홀수 번째 합과 짝수 번째 합 중 더 큰 값을 return
*/
// AM 05:55
