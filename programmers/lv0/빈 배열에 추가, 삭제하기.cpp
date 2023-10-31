// authored by jihwankim
// 23-10-28 PM 10:21
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++) {
        if(flag[i]) {
            int range = arr[i] * 2;
            for(int j = 0; j < range; j++) {
                answer.push_back(arr[i]);
            }
        } else {
            for(int j = 0; j < arr[i]; j++) {
                answer.pop_back();            
            }
        }
    }
    return answer;
}
/*
빈 배열 X가 존재
길이가 같은 정수 배열 arr과 boolean 배열 flag가 주어짐
1. flag를 차례대로 순회한다.
2. flag[i] == true -> X 뒤에 arr[i]를 arr[i]*2번 추가
3. flag[i] == false -> X 에서 마지막 arr[i]개의 원소를 제거
제한사항 - X보다 더 많은 원소를 빼지않음. empty() 검사 안해도 됨.
원소는 9이하의 정수이므로 9*9*100, 시간초과 걱정 x 
*/
// PM 10:27
