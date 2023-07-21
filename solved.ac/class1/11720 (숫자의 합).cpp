#include <stdio.h>

int n, sum;
char num;

int main(){
	scanf("%d ", &n);
	for(int i = 0; i<n ;i++){	
		scanf("%c", &num);
		sum+= (num&0x0F);
	}
	printf("%d", sum);
	return 0;
}
