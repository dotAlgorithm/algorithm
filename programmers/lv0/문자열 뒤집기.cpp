// authored by jihwankim
// 23-10-30 AM 07:39
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e) {
    reverse(my_string.begin()+s, my_string.begin()+e+1);
    return my_string;
}
/*
my_string과 정수 s, e가 주어짐
s ~ e까지를 뒤집은 문자열을 return
*/
// AM 07:41
