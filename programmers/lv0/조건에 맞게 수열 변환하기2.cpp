// authored by jihwankim
// 23-10-30 AM 05:22
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 1;
    int before = 0;
    while(before != answer) {
        bool chk = false;
        for(int& x : arr) {
            if(x % 2 && x < 50) {
                chk = true;
                x = x * 2 + 1;
            } else if(!(x % 2) && x >= 50) {
                chk = true;
                x = x / 2;
            } 
        }
        if(chk) answer++;
        before++;
    }
    return answer-1;
}
/*
배열 arr 중 원소 값이 50 이상의 짝수 -> 2로 나눔
50보다 작은 홀수 -> 2를 곱하고 1을 더함.
위 작업을 x번했을 때 arr[x]
*/
// AM 05:29
