//Q.17 Write a C program to calculate the root of a quadratic equation.

#include <stdio.h>


int main(){
	int a,b,c;
	printf("Enter the Equation: ax^2 + bx + c = 0\n");
	printf("Enter a b c\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("The Equation is %dx^2 + %dx + %d = 0\n", a,b,c);
	
	int D = ((b*b)-4*a*c);
	if (D>0){
		printf("x1 = %d/%d + sqrt(%d)/%d\n",-b,2*a,D,2*a);
		printf("x2 = %d/%d - sqrt(%d)/%d\n",-b,2*a,D,2*a);
	}
	else if (D<0){
		printf("x1 = %d/%d + i sqrt(%d)/%d\n",-b,2*a,-D,2*a);
		printf("x2 = %d/%d - i sqrt(%d)/%d\n",-b,2*a,-D,2*a);
	}
	else if (D==0){
		printf("x1 = %d/%d\n",-b,2*a);
		printf("x2 = %d/%d\n",-b,2*a);
	}
	
	
	return 0;
} 
