//Q12. Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name (single character), and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer. The charge is as follows: Charge/unit up to 199 @1.20, 200 and above but less than 400 @1.50, 400 and above but less than 600 @1.80, 600 and above @2.00. If the bill exceeds Tk. 400 then a surcharge of 15% will be charged and the minimum bill should be Tk. 100/-

#include <stdio.h>
int main(){
	int c_id, unit;
	char c_name;
	double charge;
	scanf("%d %c %d",&c_id, &c_name, &unit);
	if (unit< 199){
		charge = unit * 1.20;
	}
	else if(unit>=200 && unit <400){
		charge = unit *1.50;
	}
	else if(unit>=400 && unit<600){
		charge = unit * 1.80;
	}
	else if(unit>=600){
		charge = unit *2.00;
	}
	
	
	if(charge> 400){
		charge = charge + (charge*15)/100;
	}
	else if(charge <100){
		charge = 100;
	}
	
	printf("Charge = %.2f\n",charge);
	
	return 0;
	
}
	
	
	
	
		
	
