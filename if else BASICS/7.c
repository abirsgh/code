//Q07. Write a C program for reading any Month Number and displaying the Month name as a word. Go to the editor

#include <stdio.h>
int main(){
	int month_number;
	scanf("%d",&month_number);
	switch(month_number){
		
		case 1:
			printf("The month is January = 31 days\n");
			break;
		
		case 2:
			printf("The month is February = 28 days\n");
			break;
		
		case 3:
			printf("The month is March = 31 days\n");
			break;
		
		case 4:
			printf("The month is April = 30 days\n");
			break;
		
		case 5:
			printf("The month is May = 31 days\n");
			break;
		
		case 6:
			printf("The month is June = 30 days\n");
			break;
		
		case 7:
			printf("The month is July = 31 days\n");
			break;
		
		case 8:
			printf("The month is August = 31 days\n");
			break;
		
		case 9:
			printf("The month is September = 30 days\n");
			break;
			
		case 10:
			printf("The month is October = 31 days\n");
			break;
		
		case 11:
			printf("The month is November = 30 days\n");
			break;
			
		case 12:
			printf("The month is December = 31 days\n");
			break;
		
		default:
			printf("Not a valid Month\n");
			
		}
	
	
	return 0;
}
		
		
		
		
