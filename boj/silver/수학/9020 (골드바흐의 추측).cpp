#include <stdio.h>
#include <math.h>

int arr[10001];

void make_prime(){
	for(int i = 2; i<10001; i++){
		arr[i] = i;
	}
	for(int i = 2; i<=sqrt(10001); i++){
		if(!arr[i]) continue;
		for(int j = i*i; j<10001; j+=i){
			arr[j] = 0;
		}
	}
}
void gold_bach(int n){
	int s, e;
	s = n/2;
	while(s>1){
		e = n/2;
		while(s>1&&!arr[s]) s-=1;
		e+=e-s;
		if(arr[e]) {
			printf("%d %d\n", s, e);
			break;
		}
		else s-=1;
	}
	
}
int main() {
	make_prime();
	int n;
	scanf("%d", &n);
	for(int i=0; i<n;i++){
		int a;
		scanf("%d", &a);
		gold_bach(a);
	}
}
