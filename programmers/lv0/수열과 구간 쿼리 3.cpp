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
�����迭 arr, query�迭
query�� �ε����ؼ� ���� ����
*/
// AM 10:26
