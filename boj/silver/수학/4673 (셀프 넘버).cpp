#include <bits/stdc++.h>

using namespace std;

int n;
int arr[10001] = {1};

void sn(int num){
	int selfnum = num;
	while(num){
		selfnum += num % 10;
		num/=10;
	}
	if(selfnum < 10001) arr[selfnum] = 1;	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for(int i=1; i<10001; i++){
		sn(i);
		if(!arr[i]) cout << i << "\n";
	}
	
	return 0;
}
