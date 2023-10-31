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
arr�� 2���� ���� intervals
interval�� ��� ���� ���� ( �糡���� ���̰��� ��� ���� )
arr�� interval ������ ���϶�.
*/
// AM 07:01
