#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    for(int i = 0; i < arr.size(); i++) {
        // size°¡ È¦¼öÀÌ°í i°¡ Â¦¼ö¶ó¸é
        if(arr.size() % 2 && !(i % 2)) {
            arr[i] += n;
        }
        // size°¡ Â¦¼öÀÌ°í, i°¡ È¦ ¼ö¶ó¸é
        if(!(arr.size() % 2) && (i % 2)) {
            arr[i] += n;
        }
    }
    return arr;
}
