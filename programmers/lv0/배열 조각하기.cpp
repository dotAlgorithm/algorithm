// authored by jihwankim
// 23-10-30 AM 06:17
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    int start = 0;
    int end = arr.size();
    for(int i = 0; i < query.size(); i++) {
        if(!(i%2)) {
            end = start + query[i];
        } else {
            start = start + query[i];
        }
    }
    vector<int> answer(arr.begin()+start, arr.begin()+end+1);
    return answer;
}
/*
arr과  query가 주어짐.
짝수 인덱스 -> query[i]번 인덱스를 제외하고 배열의 query[i]번 인덱스 뒷부분을 잘라서 버림
홀수 인덱스 -> query[i]번 인덱스를 제외하고 배열의 query[i]번 인덱스 앞부분을 잘라서 버림
*/

// AM 06:27
