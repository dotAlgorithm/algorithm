// authored by jihwankim
// 23-10-30 AM 06:59
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for(auto interval : intervals) {
        for(int i = interval[0]; i <= interval[1]; i++) {
            answer.push_back(arr[i]);
        }
    }
    return answer;
}
/*
arr과 2개의 구간 intervals
interval은 모두 닫힌 구간 ( 양끝값과 사이값을 모두 포함 )
arr의 interval 구간을 구하라.
*/
// AM 07:01
