// authored by jihwankim
// 23-10-28 PM 10:00
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<bool> visited(100001, false);
    vector<int> answer;
    for(int &x : arr) {
        if(answer.size() == k) break;
        if(!visited[x]) {
            answer.push_back(x);
            visited[x] = true;
        }
    }
    while(answer.size() < k) {
        answer.push_back(-1);
    }
    return answer;
}

/*
서로 다른 k개의 수를 저장한 배열을 만들려고 함.
순서대로 무작위 수가 주어지고 새로운 배열에 추가해야함.
무작위 수가 이미 추가된 값이면 추가하지 않음.
무작위 수가 k개보다 많다면 k개까지만 출력해야함.
무작위 수가 k개보다 적다면 k개만큼 -1을 추가해야함.
*/
// PM 10:10
