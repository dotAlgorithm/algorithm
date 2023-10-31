// authoerd by jihwankim
// 23-10-28 PM 10:28
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(int &x: arr) {
        for(int i = 0; i < x; i++) {
            answer.push_back(x);
        }
    }
    return answer;
}
/*
양의 정수 배열 arr가 주어짐.
1. arr을 순회함.
2. arr[i]만큼 x의 맨뒤에 arr[i]를 추가
*/
// PM 10:30
