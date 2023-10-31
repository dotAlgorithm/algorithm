// authored by jihwankim
// 23-10-28 PM 09:48
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 배열의 길이가 2의 정수 제곱이 되도록 arr 뒤에 0을 추가
vector<int> solution(vector<int> arr) {
    int n = 1;
    while(arr.size() > (n = (n << 1)));
    
    for(int i = arr.size(); i < n; i++) {
        arr.push_back(0);
    }
    return arr;
}
// PM 09:57
