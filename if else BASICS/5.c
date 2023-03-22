//Q05. Write a C program to find the largest of three numbers.

#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a>=c){
		printf("%d is the largest number\n",a);
	}
	else if(b>=a && b>=c){
		printf("%d is the largest number\n",b);
	}
	else if(c>=a && c>=b){
		printf("%d is the largest number\n",c);
	}
	
	return 0;
	
}
