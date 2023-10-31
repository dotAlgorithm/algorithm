#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// strArr의 각 원소의 최대 길이는 30임.
int solution(vector<string> strArr) {
    vector<int> size(31, 0);
    for(string &str : strArr) {
        size[str.size()]++;
    }
    int max_size = *max_element(size.begin(), size.end());
    return max_size;
}
