// Q.16 Write a C program to check whether an alphabet is a vowel or a consonant. 
#include <stdio.h>
int main(){
	printf("Enter the character\n");
	char c;
	scanf("%c",&c);
	if( c== 'A' || c=='E' || c=='I' || c=='O' || c=='U' || 
		c== 'a' || c=='e' || c=='i' || c=='o' || c=='u'){
		printf("The character is vowel\n");
	}
	else{
		printf("The character is consonent\n");
	}
	
	
	return 0;
	
	
}
