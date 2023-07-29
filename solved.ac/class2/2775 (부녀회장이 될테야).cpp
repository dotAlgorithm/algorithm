#include <stdio.h>

int t; 
int main(){
	scanf("%d", &t);
	for(int i = 0; i < t ; i++){
		int n, k;
		int arr[15] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
		scanf("%d\n%d", &k, &n);
		for(int j = 0; j<k; j++)
			for(int d=1; d<=n;d++)
				arr[d] = arr[d-1]+arr[d];
		printf("%d\n", arr[n]);
		
	}
	return 0;
}
