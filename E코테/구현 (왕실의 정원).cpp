#include <bits/stdc++.h>

using namespace std;

bool check(int a, int b){
	if(a<1 || a>8) return false;
	if(b<1 || b>8) return false;
	return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	int x = s[0]-'a'+1;
	int y = s[1]-'0';
	cout << "x :" << x << " y :" << y <<"\n";
	int first[2] = {2, -2};
	int second[2] = {1, -1};
	int cnt = 0;
	for(int i=0; i<2; i++){
		int fx = x+first[i];
		int fy = y+first[i];
		for(int j=0 ;j<2; j++){
			int sy = y+second[j];
			int sx = x+second[j];
			cnt += check(fx, sy)?1:0;
			cnt += check(fy, sx)?1:0;
		}
	}
	cout << cnt; 
	/*
	int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
	int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
	int row = s[1] - '0';
	int column = s[0] - 'a' + 1;
	int result = 0;
	for(int i = 0;i<8 ; i++){
		int nextRow = row+dx[i];
		int nextColumn = column + dy[i];
		if(nextRow >= 1 && nextRow<= 8 && nextColumn >= 1 && nextColumn <= 8)
			result += 1;
	}
	cout << result << "\n";
	*/
	return 0;
}
