#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i,temp=0;
	cin>>n;
	int t=2;
	int arr[n+1];
	for(i=1; i<n+1; i++){
		arr[i]=0;
	}
	while(t--){
		int p;
		cin>>p;
		int a[p];
		for(i=0; i<p; i++){
			cin>>a[i];
		}
		for(i=0; i<p; i++){
			arr[a[i]]++;
		}
	}
	for(i=1; i<n+1; i++){
		if(arr[i]!=0){
			temp++;
		}	
	}
	//cout<<temp<<endl;
	if(temp==n) cout<<"I become the guy."<<endl;
	else cout<<"Oh, my keyboard!"<<endl;
	
}
