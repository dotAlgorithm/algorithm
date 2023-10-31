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
���� �迭 arr, ���ο� �迭 stk����
i = 0 -> i < arr.size() �ݺ�
stk ������ ���� < arr[i] -> stk.push(arr[i])
stk ������ ���� >= arr[i] -> stk.pop(arr[i]);

// AM 11:15
