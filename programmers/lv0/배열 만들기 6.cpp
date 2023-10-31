// authored by jihwankim
// 23-10-28 PM 10:12
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int index = 0;
    
    while(arr.size() > index) {
        if(stk.empty()) {
            stk.push_back(arr[index]);
        } else if(stk.back() == arr[index]) {
            stk.pop_back();
        } else {
            stk.push_back(arr[index]);
        }
        index++;
    }
    
    if(stk.empty()) {
        stk.push_back(-1);
    }
    
    return stk;
}

/*
0�� 1�θ� �̷���� �����迭�� �־���.
���ο� �迭�� ����. index = 0���� �����迭���̺��� ������ �Ʒ��۾�
1. �� �迭�̶�� arr[index]�� �߰��ϰ� index++;
2. ������ ���Ұ� arr[index]�� ���ٸ� �����ϰ� index++;
3. ������ ���Ұ� arr[index]�� �ٸ��ٸ� �߰��ϰ� index++;
��� �۾��� ��ġ�� ��迭�̸� [-1] return
*/

// PM 10:19
