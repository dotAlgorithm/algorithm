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
���� ���� �迭 arr�� �־���.
1. arr�� ��ȸ��.
2. arr[i]��ŭ x�� �ǵڿ� arr[i]�� �߰�
*/
// PM 10:30
