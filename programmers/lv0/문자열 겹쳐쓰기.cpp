// authored by jihwankim
// 23-10-31 AM 07:14
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    my_string.replace(s, overwrite_string.size(), overwrite_string);
    return my_string;
}
// AM 07:16
