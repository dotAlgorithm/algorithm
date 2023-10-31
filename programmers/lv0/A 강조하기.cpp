// authored by jihwankim
// AM 23-10-30 AM 05:00 
#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(char &c : myString) {
        if(c == 'a') c -= 32;
        else if(c >= 'B' && c <= 'Z'){
            c += 32;
        }
    }
    return myString;
}
// AM 05:01
