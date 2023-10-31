// authored by jihwankim
// 23-10-28 PM 11:11
#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int num1, num2, calculate;
    char op;
    string num;
    for(char& c:binomial) {
        if(c == ' ') continue;
        if(c == '+' || c == '-' || c == '*') {
            op = c;
            num1 = stoi(num);
            num.clear();
            continue;
        }
        num += c;
    }
    num2 = stoi(num);
    if(op == '+') {
        calculate = num1 + num2;
    } else if(op == '-') {
        calculate = num1 - num2;
    } else {
        calculate = num1 * num2;
    } 
    return calculate;
}
/*
사칙연산 프로그램
*/
// PM 11:18
