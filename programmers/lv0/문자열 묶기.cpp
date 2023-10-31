#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// strArr�� �� ������ �ִ� ���̴� 30��.
int solution(vector<string> strArr) {
    vector<int> size(31, 0);
    for(string &str : strArr) {
        size[str.size()]++;
    }
    int max_size = *max_element(size.begin(), size.end());
    return max_size;
}
