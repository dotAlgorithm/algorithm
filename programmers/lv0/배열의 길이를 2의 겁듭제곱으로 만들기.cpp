// authored by jihwankim
// 23-10-28 PM 09:48
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// �迭�� ���̰� 2�� ���� ������ �ǵ��� arr �ڿ� 0�� �߰�
vector<int> solution(vector<int> arr) {
    int n = 1;
    while(arr.size() > (n = (n << 1)));
    
    for(int i = arr.size(); i < n; i++) {
        arr.push_back(0);
    }
    return arr;
}
// PM 09:57
