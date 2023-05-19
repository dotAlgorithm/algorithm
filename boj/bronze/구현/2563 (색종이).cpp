#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int aver = 0;
	int x[100];
	int y[100];
	for(int i =0;i<n;i++) cin >> x[i] >> y[i];
	for(int i=1; i<n;i++){
		for(int j = 0; j<i; j++){
			int xx, yy;
			if(x[i]+10<x[j] && x[i]>x[j]){
				xx=x[i]+10 - x[j];
			}
			if(x[j]+10<x[i] && x[j]>x[i]){
				xx=x[j]+10 - x[i];
			}
			if(y[j]+10<y[i] && y[j]>y[i]){
				yy=y[j]+10 -y[i];
			}
			if(y[i]+10<y[j] && y[i]>y[j]){
				yy=y[i]+10 -y[j];
			}
			cout << xx << " " << yy;
		}
	}
	return 0;
}

