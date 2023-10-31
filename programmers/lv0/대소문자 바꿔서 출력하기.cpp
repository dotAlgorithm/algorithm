// authored by jihwankim
// 23-10-31 AM 07:08
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(char c: str) {
        if(c >= 'a' && c <='z') cout << (char) (c-32);
        else cout << (char) (c+32);
    }
    return 0;
}
// AM 07 : 10 
