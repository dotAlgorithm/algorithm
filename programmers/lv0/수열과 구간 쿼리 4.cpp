// authored by jihwankim
// 23- 10-31 AM 10:37
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(auto q: queries) {
        for(q[0]; q[0] <= q[1]; q[0]++) {
            if(q[0] % q[2] == 0) arr[q[0]]++;
        }
    }
    return arr;
}
/*
arr, query
s <= i <= e ���� i�� k�� ����̸� arr[i]�� 1�� ����.
*/
// AM 10:42
