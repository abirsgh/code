//Q04. Write a C program to find whether a given year is a leap year or not.

#include <stdio.h>
int main(){
	int year;
	scanf("%d",&year);
	
	if((year%400==0) || (year%4==0 && year%100!=0)){
		printf("The year is leap year\n");
	}
	else printf("The year is not leap year\n");
	
	return 0;
	
}

