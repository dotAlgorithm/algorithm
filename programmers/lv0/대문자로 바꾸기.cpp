// authored by jihwankim
// 23-10-30 AM 05:11
#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(char &c : myString) c = toupper(c);
    return myString;
}
// AM 05:11
