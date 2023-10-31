// authored by jihwankim
// 23-10-31 AM 10:28
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(auto q: queries) {
        vector<int> minArr;
        for(q[0]; q[0] <= q[1]; q[0]++) {
            if(arr[q[0]] > q[2]) minArr.push_back(arr[q[0]]);
        }
        if(minArr.empty()) minArr.push_back(-1);
        sort(minArr.begin(), minArr.end());
        answer.push_back(minArr[0]);
    }
    return answer;
}
/*
query(s, e, k)�� �����迭 arr
arr[s] to arr[e] �� k���� ũ�鼭 ���� ���� arr[i] ã�� 
*/
// AM 10:34
