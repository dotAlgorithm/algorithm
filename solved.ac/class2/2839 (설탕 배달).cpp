#include <stdio.h>
#include <stdlib.h>
#define min(a, b) (((a)<(b))?(a):(b))
int n; 
int main(){
	scanf("%d",&n);
	int *arr = (int*)malloc(sizeof(int)*(n+1));
	for(int i = 0; i<=n;i++) arr[i] = -1;
	arr[3]=arr[5]=1;
	for(int i = 6; i<=n;i++){
		int m = 10e9;
		if(arr[i-3]==-1&&arr[i-5]==-1) continue;
		if(arr[i-3]!=-1) m = min(m, arr[i-3]+1);
		if(arr[i-5]!=-1) m = min(m, arr[i-5]+1);
		arr[i] = m;
	}
	printf("%d", arr[n]);
	free(arr);
	return 0;
}
