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
1���� 6���� ���ڰ� ���� �ֻ��� 4��
1. �� �ֻ������� ���� ���� p�� ��� ���ٸ� 1111 * p;
2. �� �ֻ������� ���� ���ڰ� p��� (10*p+q)^2
3. �� �ֻ������� ���� ���ڰ� p�� q��� (p + q) * |p-q|
4. �� �ֻ������� ���� ���ڰ� p�̰� �� �ֻ������� ���� r, q ��� q * r
5. �� �ֻ��� ��� �ٸ��ٸ� �������� ����
*/
// AM 11:57
