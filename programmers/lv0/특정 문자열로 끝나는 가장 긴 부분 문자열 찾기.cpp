//authored by jihwankim
//23-10-29 AM 03:26
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString, string pat) {
    reverse(myString.begin(), myString.end());
    reverse(pat.begin(), pat.end());
    string answer = myString.substr(myString.find(pat));
    reverse(answer.begin(), answer.end());
    return answer;
}
/*
가장 pat가 여러번 나올수도 있으니 가장 마지막부분만 찾으면된다.
문자열과 pat를 뒤집으면 마지막 부분이 시작부분이 됨.
#추가 rfind() 라는 함수가 뒤에서부터 검색한다고 한다. 참고
*/
// AM 03:30
