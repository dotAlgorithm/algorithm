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
정수 n과 정수 3개가 담긴 slicer리스트
n 은 1, 2, 3, 4 중 하나이다.
정수 여러개가 담긴 num_list
1. slicer 정수를 a, b, c 라고 한다.
2. n = 1, 0번부터 b까지
3. n = 2, a번 부터 마지막까지
4. n = 3, a번 부터 b까지
4. n = 4, a번 부터 b까지 c간격으로
*/
// AM 07:10
