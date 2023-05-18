#include <stdio.h>
#include <math.h>

int arr[246913];

int main() {
	for(int i = 2; i<246913; i++){
		arr[i] = i;
	}
	for(int i = 2; i<=sqrt(246913); i++){
		if(!arr[i]) continue;
		for(int j = i*i; j<246913; j+=i){
			arr[j] = 0;
		}
	}
	while(true){
		int n1, n2;
		int cnt = 0;
		scanf("%d", &n1);
		if(n1==0) return 0;
		n2 = 2*n1++;
		for(n1; n1<=n2; n1++){
			if(arr[n1]) cnt++;
		}
		printf("%d\n", cnt);
	}
}
