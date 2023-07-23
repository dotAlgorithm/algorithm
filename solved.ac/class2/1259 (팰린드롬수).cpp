//acmicpc 1259
//authored by jihwankim
//2023-06-14 PM 04:09

#include <stdio.h>

int main() {
	int num;
	while(scanf("%d", &num)) {
		if(num == 0) break;
		int size = 0;
		int palin = num;
		int chk = 0;
		while(num) {
			num/=10;
			size++;
		}
		while(palin) {
			int e = 1;
			for(int i = 1; i<size; i++) e*=10;
			int end = palin%10;
			int start = palin/e;
			if(start != end) {
				chk = 1;
				break;
			}
			size -= 2;
			palin -= start*e;
			palin /= 10;
		}
		if(chk) printf("no\n");
		else printf("yes\n");
	}
	return 0;
}

//PM 04:19
