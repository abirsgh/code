//Q14. Write a C program to check whether a triangle can be formed with the given values for the angles.

#include <stdio.h>
int main(){
	int a1,a2,a3,sum;
	scanf("%d%d%d",&a1,&a2,&a3);
	sum = a1+a2+a3;
	if(sum==180){
		printf("Triangle can be formed\n");
	}
	else printf("Triangle can't be formed\n");
	
	return 0;
	
}
