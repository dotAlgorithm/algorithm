// authored by jihwankim
// 23-10-30 AM 07:04
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    int a = slicer[0], b = slicer[1] + 1, c = 1;
    if(n == 1) a = 0;
    else if(n == 2) b = num_list.size();
    else if(n == 4) c = slicer[2];
    for(a; a < b; a+=c) {
        answer.push_back(num_list[a]);
    } 
    return answer;
}
/*
���� n�� ���� 3���� ��� slicer����Ʈ
n �� 1, 2, 3, 4 �� �ϳ��̴�.
���� �������� ��� num_list
1. slicer ������ a, b, c ��� �Ѵ�.
2. n = 1, 0������ b����
3. n = 2, a�� ���� ����������
4. n = 3, a�� ���� b����
4. n = 4, a�� ���� b���� c��������
*/
// AM 07:10
