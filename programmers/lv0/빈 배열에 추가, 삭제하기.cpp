// authored by jihwankim
// 23-10-28 PM 10:21
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++) {
        if(flag[i]) {
            int range = arr[i] * 2;
            for(int j = 0; j < range; j++) {
                answer.push_back(arr[i]);
            }
        } else {
            for(int j = 0; j < arr[i]; j++) {
                answer.pop_back();            
            }
        }
    }
    return answer;
}
/*
�� �迭 X�� ����
���̰� ���� ���� �迭 arr�� boolean �迭 flag�� �־���
1. flag�� ���ʴ�� ��ȸ�Ѵ�.
2. flag[i] == true -> X �ڿ� arr[i]�� arr[i]*2�� �߰�
3. flag[i] == false -> X ���� ������ arr[i]���� ���Ҹ� ����
���ѻ��� - X���� �� ���� ���Ҹ� ��������. empty() �˻� ���ص� ��.
���Ҵ� 9������ �����̹Ƿ� 9*9*100, �ð��ʰ� ���� x 
*/
// PM 10:27
