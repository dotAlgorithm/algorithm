// authored by jihwankim
// 23-10-28 PM 10:46
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string myString, string pat) {
    for(char&c : myString) {
        if(c == 'A') {
            c = 'B';
        } else if(c == 'B') {
            c = 'A';
        }
    }
    // ã�� ������ ��� ��ȯ�Ǵ� ��ü npos
    if(myString.find(pat) == std::string::npos) return 0;
    return 1;
}

/*
1. myString���� 'A'�� 'B'�� ���� �ٲ۴�.
2. myString���� pat�� ã�´�.
std::string::npos Ȱ��
*/

// PM 10:56
