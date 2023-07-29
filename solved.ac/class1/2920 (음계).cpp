//acmicpc 2920
//authored by jihwankim
//2023-06-14 PM 04:03

#include <stdio.h>

int main() {
	int arr[8];
	int asc[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int desc[8] = {8, 7, 6, 5, 4, 3, 2, 1};
	int ascChk = 1;
	int descChk = 1;
	for(int i = 0; i<8; i++) {
		scanf("%d", &arr[i]);
	} 
	for(int i = 0 ; i<8; i++) {
		if(arr[i] != asc[i]) ascChk = 0;
		if(arr[i] != desc[i]) descChk = 0;
	}
	if(ascChk) printf("ascending");
	else if(descChk) printf("descending");
	else printf("mixed");
	return 0;
}

//PM 04:06
