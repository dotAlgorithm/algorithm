#include <stdio.h>

int t; 

int main(){
	scanf("%d", &t);
	for(int i = 0; i < t ; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		printf("%d%02d\n", (c-1)%a+1 ,(c-1)/a + 1);
	}
	return 0;
}
