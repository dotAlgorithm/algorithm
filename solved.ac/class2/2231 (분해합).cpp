#include <cstdio>

int n, ans, num, cons, size;
int main() {
	scanf("%d", &n);
	num = n;
	while(num) {
		num/=10;
		size++;
	}
	
	for(int i = n-(size*9); i<=n; i++) {
		num = cons = i;
		while(num) {
			cons = cons + num%10;
			num = num / 10;
		}
		if(cons == n) {
			ans = i;
			break;
		}
	}
	printf("%d", ans);
	
	return 0;
}
