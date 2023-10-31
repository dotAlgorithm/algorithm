// authored by jihwankim
// 23-10-31 AM 01:10
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(string intStr : intStrs) {
        int num = stoi(intStr.substr(s, l));
        if(num > k) {
            answer.push_back(num);
        }
    }
    return answer;
}
/*
���ڹ迭 intStrs�� ���� k, s, l
1. intStr�� �� ���Ҹ� ����.
2. �� ���ҿ� ���Ͽ� s�� �ε������� ���� l¥�� �κ� ���ڿ��� ����.
3. �κ� ���ڿ��� k���� ũ�� push 
*/
// AM 01:16
