// authored by jihwankim
// 23-10-30 AM 05:20
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for(int x: num_list) {
        while(x != 1) {
            answer++;
            if(x % 2) {
                x = (x - 1) / 2;
            } else {
                x = x / 2;
            }
        }
    }
    return answer;
}
/*
Á¤¼ö°¡ Â¦¼ö -> div
È¦¼ö -> -1 and div
*/
// Am 05:21
