// authored by jihwankim
// 23-10-31 AM 01:30
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int num = stoi(to_string(a) + to_string(b));
    return (2 * a * b > num) ? 2*a*b : num;
}
// AM 01:32
