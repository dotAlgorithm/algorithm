// authored by jihwankim
// 23-10-28 PM 10:12
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int index = 0;
    
    while(arr.size() > index) {
        if(stk.empty()) {
            stk.push_back(arr[index]);
        } else if(stk.back() == arr[index]) {
            stk.pop_back();
        } else {
            stk.push_back(arr[index]);
        }
        index++;
    }
    
    if(stk.empty()) {
        stk.push_back(-1);
    }
    
    return stk;
}

/*
0과 1로만 이루어진 정수배열이 주어짐.
새로운 배열을 생성. index = 0으로 정수배열길이보다 작으면 아래작업
1. 빈 배열이라면 arr[index]를 추가하고 index++;
2. 마지막 원소가 arr[index]와 같다면 제거하고 index++;
3. 마지막 원소가 arr[index]와 다르다면 추가하고 index++;
모든 작업을 마치고 빈배열이면 [-1] return
*/

// PM 10:19
