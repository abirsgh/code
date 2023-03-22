//Q.18 Write a C program to read the roll no, and marks of three subjects and calculate the total, percentage, and grade.

#include <stdio.h>
int main(){
	int roll,sub1,sub2,sub3;
	scanf("%d %d %d %d",&roll,&sub1,&sub2,&sub3);
	int sum;
	double p,grade;
	sum = sub1+sub2+sub3;
	p = ((double) sum/300)*100;
	if(p>=80){
		grade = 4.00;
		printf("%.2f\n", grade);
	}
	else if(p<80 && p>=75){
		grade = 3.75;
		printf("%.2f\n", grade);
	}
	else if(p<75 && p>=70){
		grade = 3.50;
		printf("%.2f\n", grade);
	}
	else if(p<70 && p>=65){
		grade = 3.25;
		printf("%.2f\n", grade);
	}
	else if(p<65 && p>=60){
		grade = 3.00;
		printf("%.2f\n", grade);
	}
	else if(p<60 && p>=55){
		grade = 2.75;
		printf("%.2f\n", grade);
	}
	else if(p<55 && p>=50){
		grade = 2.50;
		printf("%.2f\n", grade);
	}
	else if(p<50 && p>=45){
		grade = 2.25;
		printf("%.2f\n", grade);
	}
	else if(p<45 && p>=40){
		grade = 2.00;
		printf("%.2f\n", grade);
	}
	
	
	return 0;
	
}
