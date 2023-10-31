// authored by jihwankim
// 23-10-30 AM 07:14
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer;
    vector<bool> visited(101, false);
    for(int x : indices) {
        visited[x] = true;
    }
    for(int i = 0; i < my_string.size(); i++) {
        if(visited[i]) continue;
        answer += my_string[i];
    }
    return answer;
}
/*
my_string ���ڿ��� ���� �迭 indices�� �ִ�.
1. my_string���� indices�� ���ҿ� �ش��ϴ� �ε����� ���ڸ� �����
-> substr�� �ذ�
*/
// AM 07:25
