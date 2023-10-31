// authored by jihwankim
// 23-10-28 PM 09:39
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    if(arr1.size() > arr2.size()) return 1;
    else if(arr1.size() < arr2.size()) return -1;
    else {
        // accumulate -> 배열 시작, 끝, 초기값 구성
        // numberic header
        int sum1 = accumulate(arr1.begin(), arr1.end(), 0);
        int sum2 = accumulate(arr2.begin(), arr2.end(), 0);
        if(sum1 > sum2) return 1;
        else if(sum1 < sum2) return -1;
    }
    return 0;
}

/* 
1. 두 배열의 길이 비교, 길이가 긴 쪽이 더 큼
2. 길이가 같다면 원소의 합을 비교
3. 원소의 합이 같다면, 두 배열은 같음.
arr1 < arr2 -> -1
arr1 > arr2 -> 1
arr1 == arr2 -> 0
*/ 
// PM 09:45
