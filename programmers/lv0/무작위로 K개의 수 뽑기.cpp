// authored by jihwankim
// 23-10-28 PM 10:00
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<bool> visited(100001, false);
    vector<int> answer;
    for(int &x : arr) {
        if(answer.size() == k) break;
        if(!visited[x]) {
            answer.push_back(x);
            visited[x] = true;
        }
    }
    while(answer.size() < k) {
        answer.push_back(-1);
    }
    return answer;
}

/*
���� �ٸ� k���� ���� ������ �迭�� ������� ��.
������� ������ ���� �־����� ���ο� �迭�� �߰��ؾ���.
������ ���� �̹� �߰��� ���̸� �߰����� ����.
������ ���� k������ ���ٸ� k�������� ����ؾ���.
������ ���� k������ ���ٸ� k����ŭ -1�� �߰��ؾ���.
*/
// PM 10:10
