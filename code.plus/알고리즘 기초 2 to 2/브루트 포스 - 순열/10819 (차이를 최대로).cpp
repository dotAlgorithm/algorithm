// acmicpc 10819
// authored by jihwankim
// 23-08-01 PM 07:57
// code.plus
#include <iostream>
#include <cmath>

using namespace std;

int n;
int maxDiff;
int arr[10];
int val[10];
bool chk[10];
void input() {
    cin >> n;
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
}

void solve(int k) {
    if(k == n) {
        int sum = 0;
        for(int i = 0; i<n-1; i++) {
            sum += abs(val[i]-val[i+1]);
        }
        maxDiff = max(maxDiff, sum);
        return ;    
    }
    for(int i = 0; i<n; i++) {
        if(!chk[i]) {
            chk[i] = true;
            val[k] = arr[i];
            solve(k+1);
            chk[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    input();
    solve(0);
    cout << maxDiff;
    
    return 0;
}
// PM 08:04

