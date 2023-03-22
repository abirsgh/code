//Q15. Write a C program to check whether a character is an alphabet, digit, or special character. 

#include <stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	if((c>='A' && c<='Z') || (c>='a' && c<='z')){
		printf("The character is an alphabet\n");
	}
	else if (c>= '0' && c<= '9' ){
		printf("The character is a digit\n");
	}
	else printf("The character is a special digit\n");
	
	
	return 0;
	
}
