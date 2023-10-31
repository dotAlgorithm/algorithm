// authored by jihwankim
// 23-10-28 PM 10:40
#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    for(int i = 0; i < rny_string.size(); i++) {
        if(rny_string[i] == 'm') {
            rny_string.replace(i, 1, "rn");
        }
    }
    return rny_string;
}

/*
m -> rm
*/
// PM 10:45
