// authored by jihwankim
// 23-10-31 AM 10:00
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string odd, even;
    for(int x:num_list){
        if(x % 2) odd += (x+'0');
        else even += (x+'0');
    }
    return stoi(odd)+stoi(even);
}
// AM 10:02
