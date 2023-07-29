#include <stdio.h>

int a, b, v; 

int main(){
	scanf("%d %d %d", &a, &b, &v);
	printf("%d", (v-b)%(a-b)==0?(v-b)/(a-b):(v-b)/(a-b)+1);
	return 0;
}
