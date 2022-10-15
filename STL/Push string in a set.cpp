#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s;
	cin>>n>>s;
	transform(s.begin(),s.end(),s.begin(), ::tolower);
	int a[26];
  	transform(s.begin(),s.end(),s.begin(), ::tolower);
	set<char> st;
	for(int i = 0; i < n; i++){
	    st.insert(s[i]);
	}
	cout << (st.size() == 26 ? "YES" : "NO") << "\n";
}
