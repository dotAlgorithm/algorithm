// authored by jihwankim
// 23-10-31 AM 11:07
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    for(int x: arr) {
        while(!stk.empty() && stk.back() >= x) {
            stk.pop_back();
        }
        if(stk.empty()) stk.push_back(x);
        else if(stk.back() < x) stk.push_back(x);
    }
    return stk;
}
/*
정수 배열 arr, 새로운 배열 stk생성
i = 0 -> i < arr.size() 반복
stk 마지막 원소 < arr[i] -> stk.push(arr[i])
stk 마지막 원소 >= arr[i] -> stk.pop(arr[i]);

// AM 11:15
