//acmicpc 2475
//authored by jihwankim
//2023-06-14 PM 03:57

#include <stdio.h>

int main() {
	int arr[5];
	int n;
	int sum = 0;
	for(int i = 0 ; i<5; i++) {
		scanf("%d", &arr[i]);
		n = arr[i]*arr[i];
		sum+=n;
	}
	printf("%d", sum%10);
	return 0;
}

//PM 03:59
