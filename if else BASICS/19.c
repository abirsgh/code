//Q19. Write a C program to calculate the final grade of CSEDU 1st Year 1st Semester students. Take total marks as input for all the theory and lab courses. Note that the total marks for each theory course are 100 and the total marks for each lab course are 50.

#include <stdio.h>
int main(){
	double FCC,EEE,DM,Chemistry,Calculus;
	double FCC_Lab, EEE_Lab, Chemistry_Lab;
	printf("Enter marks of theory courses\n");
	scanf("%lf %lf %lf %lf %lf",&FCC,&EEE,&DM,&Chemistry,&Calculus);
	printf("Enter marks of Lab courses\n");
	scanf("%lf %lf %lf",&FCC_Lab, &EEE_lab, &Chemistry_lab);
	double FCC_grade, EEE_grade, DM_grade, Chemistry_grade, Calculus_grade;
	double FCC_Lab_grade, EEE_Lab_grade, Chemistry_Lab_grade;
	FCC_Lab = (FCC_Lab*100)/50;
	EEE_Lab = (EEE_Lab*100)/50;
	Chemistry_Lab = (Chemistry_Lab*100)/50;
	if(FCC>=80){
		FCC_grade = 4.00;
	}
	else if(FCC<80 && FCC>=75){
		FCC_grade = 3.75;
		
	}
	else if(FCC<75 && FCC>=70){
		FCCgrade = 3.50;
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
	
	
