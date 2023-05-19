#include <stdio.h>
#include <string.h>

char str[101];

int palindrome(int s, int e){
	if(e-s<=1 && str[s] == str[e]) return 1;
	if(str[s] != str[e]) return 0;
	return palindrome(s+1, e-1);
}

int main(){
	scanf("%s", &str);
	printf("%d", palindrome(0, strlen(str)-1));
} 
