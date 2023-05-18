#include <bits/stdc++.h>

using namespace std;
int sum;

int main () {
    int arr[5];
    for(int i =0; i<5;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    sort(arr, arr+5);
    cout << sum/5 <<"\n";
    cout << arr[2];
    return 0;
}
