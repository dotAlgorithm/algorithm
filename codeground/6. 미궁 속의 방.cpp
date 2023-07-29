// codeground
// authored by jihwankim
// 23-07-23 PM 03:34
#include <iostream>

using namespace std;

long long Answer;
long long maxVal;
int n, k;
int x, y;

void solve(char &c) {
	if(c == 'D') y++;
	else if(c == 'U') y--;
	else if(c == 'R') x++;
	else x--;
	
	// 오르막인지 내리막인지 체크 
	bool asc = true;
	if((x+y) % 2) asc = false;
	
	long long now;
	
	if(x+y < n) {
		// 현재 위치 이전 라인까지의 값 
		now = (x+y)*(x+y+1) / 2;
		// 이전 라인에서 몇칸 더 이동했는지 체크
		now += asc ? x+1 : y+1; 
	}
	else {
		// 대각선을 기준으로 대칭되는 점을 이용 
		int sx = n-x-1;
		int sy = n-y-1;
		// 대칭 좌표의 값을 구함. 
		int sym = (sx+sy)*(sx+sy+1) / 2;
		sym += asc ? sx+1 : sy+1;
		
		// 모든 대칭은 val(0,0) + val(n, n) 과 같음. 
		now = (maxVal - sym);
	}
	
	Answer += now;
}

void input() {
	string c;
	cin >> n >> k >> c;
	
	maxVal = n*n+1;
	x = y = 0;
	
	for(int i = 0; i<k; i++) solve(c[i]);
}


int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int T, test_case;
	
	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 1;
		
		input();
		
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}
 
	return 0;	
}
/*
몇개 = i+j+1
방향 = i+j == even ? asc : desc;
위치 = asc ? j+1 : i+1
값 = n(n+1)/2 
*/

// PM 05:04
