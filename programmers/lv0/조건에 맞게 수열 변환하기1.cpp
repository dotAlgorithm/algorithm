// authored by jihwankim
// 23-10-30 AM 05:30
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    for(int& x : arr) {
        if(x % 2 && x < 50) {
            x = x * 2;
        } else if(!(x % 2) && x >= 50) {
            x = x / 2;
        } 
    }
    return arr;
}
/*
배열 arr 중 원소 값이 50 이상의 짝수 -> 2로 나눔
50보다 작은 홀수 -> 2를 곱함.
위 작업을 x번했을 때 arr[x]
*/
// AM 05:31
