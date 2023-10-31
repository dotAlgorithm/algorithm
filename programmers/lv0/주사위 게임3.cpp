// authored by jihwankim
// 23-10-31 AM 11:27
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#define hit first
#define score second

using namespace std;

int solution(int a, int b, int c, int d) {
    map<int, int> m{{1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}};
    m[a]++; m[b]++; m[c]++; m[d]++;
    
    vector<pair<int, int>> v;
    for(auto &x : m) {
        if(x.second) v.push_back({x.second, x.first});
    }
    sort(v.begin(), v.end(), greater<pair<int,int>>());
    
    if(v.size() == 1) return 1111 * v[0].score;
    if(v.size() == 2) {
        if(v[0].hit == 3) return pow(10*v[0].score+v[1].score, 2);
        return (v[0].score + v[1].score) * abs(v[0].score-v[1].score);
    }
    if(v.size() == 3) return v[1].score* v[2].score;
    return min(v[0].score, min(v[1].score, min(v[2].score , v[3].score)));
}
/*
1부터 6까지 숫자가 적힌 주사위 4개
1. 네 주사위에서 나온 숫자 p가 모두 같다면 1111 * p;
2. 세 주사위에서 나온 숫자가 p라면 (10*p+q)^2
3. 두 주사위에서 나온 숫자가 p와 q라면 (p + q) * |p-q|
4. 두 주사위에서 나온 숫자가 p이고 두 주사위에서 각각 r, q 라면 q * r
5. 네 주사위 모두 다르다면 가장작은 숫자
*/
// AM 11:57
