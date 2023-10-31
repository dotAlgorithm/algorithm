// authored by jihwankim
// 23-10-31 AM 01:32
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int num1 = stoi(to_string(a)+to_string(b));
    int num2 = stoi(to_string(b)+to_string(a));
    if(num1 >= num2) return num1;
    return num2;
}
/*
a+b와 b+a중 더 큰값
*/
// AM 01:34
