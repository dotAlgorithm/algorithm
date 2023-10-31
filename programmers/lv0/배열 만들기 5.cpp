// authored by jihwankim
// 23-10-31 AM 01:10
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(string intStr : intStrs) {
        int num = stoi(intStr.substr(s, l));
        if(num > k) {
            answer.push_back(num);
        }
    }
    return answer;
}
/*
숫자배열 intStrs와 정수 k, s, l
1. intStr의 각 원소를 구함.
2. 각 원소에 대하여 s번 인덱스에서 길이 l짜리 부분 문자열을 구함.
3. 부분 문자열이 k보다 크면 push 
*/
// AM 01:16
