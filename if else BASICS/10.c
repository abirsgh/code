//Q10. Write a C program to read any day number in an integer and display the day name in word format. Go to the editor Write a program in C to read any digit and display it in the word.

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("The digit is One\n");
			printf("Saturday\n");
			break;
		
		case 2:
			printf("The digit is Two\n");
			printf("Sunday\n");
			break;
		
		case 3:
			printf("The digit is Three\n");
			printf("Monday\n");
			break;
		
		case 4:
			printf("The digit is Four\n");
			printf("Tuesday\n");
			break;
			
		case 5:
			printf("The digit is Five\n");
			printf("Wednesday\n");
			break;
			
		case 6:
			printf("The digit is Six\n");
			printf("Thursday\n");
			break;
			
		case 7:
			printf("The digit is seven\n");
			printf("Friday\n");
			break;
			
		case 8:
			printf("The digit is Eight\n");
			printf("Not a day\n");
			break;
			
		case 9:
			printf("The digit is Nine\n");
			printf("Not a day\n");
			break;
			
		default:
			printf("Not a digit\n");
			printf("Not a day\n");
			break;
			
		
	}
	return 0;
	
}	
			
		
					
		
		
