// authored by jihwankim
// 23-10-31 AM 10:03
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> n) {
    auto last = prev(n.end());
    int lastprev = *prev(last);
    if(lastprev < *last) n.push_back(*last-lastprev);
    else n.push_back(*last*2);
    return n;
}
/*
num_list
last > prev라면 last-prev
last <= prev라면 last*2
*/
// AM 10:11
