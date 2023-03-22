//Q11. Write a C program to calculate profit and loss on a transaction. 

#include <stdio.h>
int main(){
	int purchase_price, selling_price,difference;
	scanf("%d%d",&purchase_price, &selling_price);
	difference= purchase_price - selling_price;
	if(selling_price > purchase_price){
		printf("Profit = %d taka\n", -difference);
	}
	else if(selling_price < purchase_price){
		printf("Loss = %d taka\n", difference);
	}
	else printf("No profit No loss\n");
	
	return 0;
	
}
