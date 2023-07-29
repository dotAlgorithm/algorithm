/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int n;
int arr[1000][3];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<3; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 1; i<n; i++){
        for(int j = 0; j<3; j++){
            if(j==0) {
                arr[i][j] += min(arr[i-1][j+1], arr[i-1][j+2]);
            }
            if(j==1){
                arr[i][j] += min(arr[i-1][j-1], arr[i-1][j+1]);
            }
            if(j==2) {
                arr[i][j] += min(arr[i-1][j-1], arr[i-1][j-2]);
            }
        }
    }
    for(int i = 0; i<3; i++){
        arr[n-1][0] = min(arr[n-1][0], arr[n-1][i]);
    }
    cout << arr[n-1][0];
    

    return 0;
}
