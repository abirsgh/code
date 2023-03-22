//Q06. Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

#include <stdio.h>
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	if (x>0 && y>0){
		printf("1st Quadrant\n");
	}
	else if (x<0 && y>0){
		printf("2nd Quadrant\n");
	}
	else if (x<0 && y<0){
		printf("3rd Quadrant\n");
	}
	else if (x>0 && y<0){
		printf("4th Quadrant\n");
	}
	else if (x==0 && (y>0 || y<0)){
		printf("Lies on Y axis\n");
	}
	else if (y==0 && (x>0 || x<0)){
		printf("Lies on X axis\n");
	}
	else printf("The co ordinate is Centre point\n");
	
	
	return 0;
}
	
