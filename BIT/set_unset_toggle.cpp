#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;

void printBinary(int num){
	for(int i=10; i>=0; i--){
		cout<<((num>>i) & 1);
	}
	cout<<endl;	
}


int main(){
	int a=9;
	int i=2;
	printBinary(a);

	if((a & (1<<i))!=0){  //Check i-th bit set he ki nehi
		cout<<"SET BIT"<<endl;
	}
	else cout<<"NOT SET BIT"<<endl;

	printBinary(a | (1<<i)); //set i-th bit then a|(1<<i)
	printBinary(a &(~(1<<i))); //unset i-th bit then a&(~(1<<i))
	printBinary(a ^ (1<<i)); //Toggle (1 ko 0 || 0 ko 1 banana)

	//count kitni bit set haa
	int count=0; 
	for(int j=31; j>=0; j--){
		if((a & (1<<j)) !=0){
			count++;
		}
	}
	cout<<count<<endl;

	cout<<__builtin_popcount(a)<<endl; //integesrs set count
	cout<<__builtin_popcountll((1LL<<35)-1); // long long int set count
	

}
