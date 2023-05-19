#include <stdio.h>
#include <stdlib.h>

int cnt, n;
 
typedef struct {
	int size;
	int *arr;	
} MergeArray;
typedef struct {
	int size;
	int *arr;
}Merged;

void Init(MergeArray* S, Merged* U) {
	scanf("%d %d", &S->size, &n);
	U->size = S->size;
	S->arr = (int *)malloc(sizeof(int)*(S->size));
	U->arr = (int *)malloc(sizeof(int)*(U->size));
}

void input(MergeArray* S) {
	int i;
	for(i = 0; i<S->size;i++){
		scanf("%d", &S->arr[i]);
	}
}
void mergeSort(MergeArray* S, Merged* U, int l, int m, int h){
	int i = l, j = m+1, k =l;
    while(i<=m && j<=h) {
        if(S->arr[i]<S->arr[j]) {
            U->arr[k++] = S->arr[i++];
        }
        else {
            U->arr[k++] = S->arr[j++];
        }
    }
    if(i > m) {
        for(j; j<=h; j++) {
            U->arr[k++] = S->arr[j];
        }
    }
    else {
        for(i; i<=m; i++) {
            U->arr[k++] = S->arr[i];
        }
    }
    for(i=l; i<=h; i++) {
        S->arr[i] = U->arr[i];
		if(++cnt == n) printf("%d",U->arr[i]);
    }
}
void merge(MergeArray* S, Merged* U, int l, int h) {
    if(l < h) {
        int m = (l+h) / 2;
        merge(S, U, l, m);
        merge(S, U, m+1, h);
        mergeSort(S, U, l, m, h);
    }
}
int main() {
	MergeArray arr;
	Merged mergedArr;
	Init(&arr, &mergedArr);
	input(&arr);
	merge(&arr, &mergedArr, 0, arr.size-1);
	if(cnt < n) printf("-1");
	free(arr.arr);
	free(mergedArr.arr);
	return 0;
}
