// authored by jihwankim
// 230-10-30 AM 06:48
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 2) answer.push_back(i);
    }
    if(answer.empty()) return {-1};
    return vector<int>(arr.begin()+answer.front(), arr.begin()+answer.back()+1);
}
/*
arr에서 2가 모두 포함된 가장 작은 연속 부분 배열을 찾기
1. 2의 개수를 센다.
2. 2의 개수만큼 2를 포함한 모든 원소를 answer에 추가한다.
*/
// AM 06:53
