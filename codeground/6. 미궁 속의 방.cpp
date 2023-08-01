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
	
	// ���������� ���������� üũ 
	bool asc = true;
	if((x+y) % 2) asc = false;
	
	long long now;
	
	if(x+y < n) {
		// ���� ��ġ ���� ���α����� �� 
		now = (x+y)*(x+y+1) / 2;
		// ���� ���ο��� ��ĭ �� �̵��ߴ��� üũ
		now += asc ? x+1 : y+1; 
	}
	else {
		// �밢���� �������� ��Ī�Ǵ� ���� �̿� 
		int sx = n-x-1;
		int sy = n-y-1;
		// ��Ī ��ǥ�� ���� ����. 
		int sym = (sx+sy)*(sx+sy+1) / 2;
		sym += asc ? sx+1 : sy+1;
		
		// ��� ��Ī�� val(0,0) + val(n, n) �� ����. 
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
� = i+j+1
���� = i+j == even ? asc : desc;
��ġ = asc ? j+1 : i+1
�� = n(n+1)/2 
*/

// PM 05:04
