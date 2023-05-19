#include <bits/stdc++.h>
#define max(a, b) (((a)>(b))?(a):(b))

using namespace std; 

char a[10001], b[10001];
vector<int> sss;
int carry, i;

int main(){
	scanf("%s %s", a, b);
	int	la = strlen(a), lb = strlen(b);
	while(i < la && i < lb){
		i++;
		int op1 = a[la-i]-'0';
		int op2 = b[lb-i]-'0';
		int result = op1+op2+carry;
		carry = 0;
		sss.push_back(result%10);
		carry = result > 9 ? 1 : 0;
	}
	while(i<la){
		i++;
		int result = (int)(a[la-i]-'0')+carry;
		sss.push_back(result%10);
		carry = 0;
		carry = result > 9 ? 1 : 0;
	}
	while(i<lb){
		i++;
		int result = (int)(b[lb-i]-'0')+carry;
		sss.push_back(result%10);
		carry = 0;
		carry = result > 9 ? 1 : 0;
	}
	if(carry) sss.push_back(1);
	for(int i = 1; i<=sss.size(); i++){
		printf("%d",sss[sss.size()-i]);
	}
	return 0;
}
