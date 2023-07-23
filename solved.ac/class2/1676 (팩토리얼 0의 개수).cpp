#include <stdio.h>

int f[501];
int i;
int cnt;

int main() {
	int n;
	scanf("%d", &n);
	f[0] = 1;
	while(i++<n) {
		f[i] = f[i-1] * i; 
		int z = f[i];
		while(z%10==0) {
			z/=10; 
			cnt++; 
		}
		if(i<100) f[i] = z%100000;
		else f[i] = z%1000000;
	}
	printf("%d", cnt);
	
	return 0;
}
