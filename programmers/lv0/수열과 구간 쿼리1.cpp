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
�迭 arr, 2���� �����迭 queries �ϳ��� ���� = [s, e] ��
s <= i <= e�� ���� ��� i�� ���� arr[i]�� 1�� ����.
*/
// AM 05:34
