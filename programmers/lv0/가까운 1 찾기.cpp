// authored by jihwankim
// 23-10-30 AM 07:11
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    for(int i = idx; i < arr.size(); i++) {
        if(arr[i]) return i;
    }
    return -1;
}
/*
arr의 원소는 1 or 0, idx는 주어짐
index가 idx보다 크면서 arr의 값이 1인 가장 작은 인덱스를 찾아라. 
*/
// AM 07:12
