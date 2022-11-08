#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i=10; i>=0; i--){
		cout<<((num>>i) & 1);
	}
	cout<<endl;	
}

int main(){
	for(char c='A'; c<='E'; c++){
		cout<<c<<" ";
		printBinary((int)c);
	}
	for(char c='a'; c<='e'; c++){
		cout<<c<<" ";
		printBinary((int)c);
	}
	
	//Uppercase A to lowercase a
	char c='A';
	char cnew = (c | (1<<5));
	cout<<cnew<<endl;
	cout<<char('A' | ' ')<<endl;


	//Lowercase a to uppercase A
	char ch='a';
	cout<<char(ch & (~(1<<5)))<<endl;
	cout<<char('a' & '_')<<endl; // 

}
