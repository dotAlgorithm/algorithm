// authored by jihwankim
// 23-10-30 AM 05:31
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(auto &query: queries) {
        int s = query[0];
        int e = query[1];
        for(int i = s; i<=e; i++) {
            arr[i]++;
        }
    }
    return arr;
}
/*
배열 arr, 2차원 정수배열 queries 하나의 쿼리 = [s, e] 꼴
s <= i <= e에 대한 모든 i에 대해 arr[i]에 1을 더함.
*/
// AM 05:34
