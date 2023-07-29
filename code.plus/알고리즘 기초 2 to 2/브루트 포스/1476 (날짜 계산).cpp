// acmicpc 1476
// code.plus
// authored by jihwankim
// 23-07-24 AM 07:04
#include <bits/stdc++.h>

using namespace std;

int e, s, m;

void input() {
	cin >> e >> s >> m;
}

void solve() {
	/*moduler
	int maxYear = 15 * 28 * 19;
	
	if(e == 15) e = 0;
	if(s == 28) s = 0;
	if(m == 19) m = 0;
	
	for(int i = 1; i <= maxYear; i++) {
		if(i%15 == e){
			if(i%28 == s && i % 19 == m){
				cout << i;
				return ;
			}
		}
	}*/
	
	//중국인의 나머지 정리 
    int maximum[3] = {15, 28, 19};
    int esm[3] = {e, s, m};
    int maxYear = 15 * 28 * 19;

    int result = 0;
    for (int i = 0; i < 3; i++) {
        int Mi = maxYear / maximum[i];
        int bi = Mi % maximum[i];
        int ni = 0;

        // 중국인의 나머지 정리 합동식 계산
        // 역원의 기준 1 
        while ((bi * ++ni) % maximum[i] != 1);

        result += esm[i] * Mi * ni;
    }

    result %= maxYear;
    if (result == 0) result = maxYear;
    cout << result;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

// AM 07:17
