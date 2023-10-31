// authored by jihwankim
// 23-10-30 AM 05:10
#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(char &c : myString) c = tolower(c);
    return myString;
}
// AM 05:10
