// authored by jihwankim
// 23-10-30 AM 07:27
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    for(int i = 1; i <= n; i++) {
        if(i%k == 0) answer.push_back(i);
    }
    return answer;
}
/*
정수 n과 k가 주어짐. 
1. 1이상 n 이하의 정수를 탐색
2. k의 배수를 오름차순으로 저장.
*/
// AM 07:28
