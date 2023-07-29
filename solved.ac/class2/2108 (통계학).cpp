#include <bits/stdc++.h>

using namespace std;

int range[8001];

int main() {
	int n;
	scanf("%d", &n);
	
	int* arr = new int[n];
	int min = 8001;
	int max = 0;
	double total = 0;
	
	for (int i = 0; i<n; i++){
		int num;
		scanf("%d", &num);
		num+=4000;
		arr[i] = num;
		total += num;
		if(min>num) min = num;
		range[num]++;
		if(range[num] > range[max]) max = num;
	}
	
	int count=0;	
	for(min; min<8001; min++){
		if(range[max] == range[min]) {
			max = min;
			count++;
		}
		if(count == 2) break;
	}
	sort(arr, arr+n);
	printf("%.0lf\n", round(total/n)-4000);
	printf("%d\n", arr[n/2]-4000);
	printf("%d\n", max-4000);
	printf("%d\n", arr[n-1] - arr[0]);

	delete[] arr;	
	return 0;
} 
