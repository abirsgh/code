#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i=10; i>=0; i--){
		cout<<((num>>i) & 1);
	}

}

int main(){
	for(int i=0; i<8; i++){
		cout<<i<<" ";
		printBinary(i);
		if(i&1) cout<<" odd"<<endl;
		else cout<<" even" <<endl;
	}
}
