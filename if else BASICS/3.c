//Q03. Write a C program to check whether a given number is positive or negative.

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	if(n>0){
		printf("The number is Positive\n");
	}
	else if (n<0){
		printf("The number is Negative\n");
	}
	else printf("The number is 0\n");
	
	return 0;
	
}
