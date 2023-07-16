#include <stdio.h>
int main(){
	int n,reverse,temp=0;
	scanf("%d",&n);
	int ekok = n%10;
	n=n/10;
	if(n==0){
		reverse = ekok;
		printf("%d",reverse);
		temp =1;
	}
	int doshok = n%10;
	n=n/10;
	if(n==0 && temp ==0){
		reverse = ekok*10+doshok;
		printf("%d",reverse); 
		temp =1;
	}
	int shotok = n%10;
	n=n/10;
	if(n==0 && temp==0){
		reverse = ekok*100+doshok*10+shotok;
		printf("%d",reverse); 
		temp =1;
	}
	int shohosro = n%10;
	n=n/10;
	if(n==0 && temp==0){
		reverse = ekok*1000+doshok*100+shotok*10+ shohosro;
		printf("%d",reverse); 
		temp =1;
	}
	int ojut = n%10;
	n=n/10;
	if(n==0 && temp==0){
		reverse = ekok*10000+doshok*1000+shotok*100+ shohosro*10+ojut;
		printf("%d",reverse); 
		temp=1;
	}
	int lokkho = n%10;
	if(n==0 && temp==0){
		reverse = ekok*100000+doshok*10000+shotok*1000+ shohosro*100+ojut*10+lokkho;
		printf("%d",reverse); 
		temp =1;
	}
	

}
