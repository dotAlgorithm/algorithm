// authored by jihwankim
// 23-10-30 AM 06:17
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    int start = 0;
    int end = arr.size();
    for(int i = 0; i < query.size(); i++) {
        if(!(i%2)) {
            end = start + query[i];
        } else {
            start = start + query[i];
        }
    }
    vector<int> answer(arr.begin()+start, arr.begin()+end+1);
    return answer;
}
/*
arr��  query�� �־���.
¦�� �ε��� -> query[i]�� �ε����� �����ϰ� �迭�� query[i]�� �ε��� �޺κ��� �߶� ����
Ȧ�� �ε��� -> query[i]�� �ε����� �����ϰ� �迭�� query[i]�� �ε��� �պκ��� �߶� ����
*/

// AM 06:27
