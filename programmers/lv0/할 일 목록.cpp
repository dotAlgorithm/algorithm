// authored by jihwankim
// 23-10-30 AM 05:37
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished) {
    vector<string> answer;
    for(int i = 0; i < todo_list.size(); i++) {
        if(!finished[i]) answer.push_back(todo_list[i]);
    }
    return answer;
}
/*
일에 대한 todo_list, 일을 마쳤는지 finished
마치지 못한 일을 작성
*/
// AM 05:38
