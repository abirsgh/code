//Q09. Write a C program that computes the area of various geometrical shapes (Triangle, Rectangle, and Circle) using a menu-driven approach.

#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Which of the follwing's area you want to calculate?\n 1.Tringle\n 2.Rectangle\n 3.Circle\n");
	scanf("%d",&n);
	double side1,side2,side3,s,area;
	double l,w;
	double r;
	switch(n){
		
		case 1: 
			printf("Enter the length of the sides\n");
			scanf("%lf%lf%lf",&side1,&side2,&side3);
			s= (side1+side2+side3)/2;
			area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
			printf("area = %.2f\n", area);
			break; 
			
		case 2:
			
			printf("Enter the length and width\n");
			scanf("%lf%lf",&l,&w);
			area = l*w;
			printf("area = %.2f\n", area);
			break;
			
		case 3:
			printf("Enter the radius of the circle\n");
			
			scanf("%lf",&r);
			area = 3.1416*r*r;
			printf("area = %.2f\n", area);
			break;
			
		default:
			printf("Not a valid option\n");
			
		}
		
		
	return 0;
}	
