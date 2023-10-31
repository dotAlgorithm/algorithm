// authored by jihwankim
// 23-10-31 AM 10:25
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(auto query: queries) {
        swap(arr[query[0]], arr[query[1]]);
    }
    return arr;
}
/*
정수배열 arr, query배열
query를 인덱싱해서 서로 스왑
*/
// AM 10:26
