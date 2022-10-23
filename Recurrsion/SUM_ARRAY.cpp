#include <bits/stdc++.h>
using namespace std;

//SUM of Array

int sum(int n, int a[]){
	if(n<0) return 0;
	sum(n-1,a) + a[n];
}

int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<< sum(n-1, a);
}
