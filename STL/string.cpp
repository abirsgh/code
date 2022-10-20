#include <bits/stdc++.h>

using namespace std;
int main() {

	string s = "aaAsca caba";
	string ss = s;
	reverse(ss.begin(), ss.end());  //reverse a string 
	if(s == ss)cout << "Palindrom\n";
	else cout << "NO" << "\n";
	cout << s.substr(2, 6);  //Print sub string 

	string s = "aBcAcnd";
	transform(s.begin(), s.end(), s.begin(), ::tolower);  //transform to lower
	transform(s.begin(),s.end(),s.begin(), ::toupper);  //transform to upper
	set<char> st;
	for(int i = 0; i < n; i++){
	    st.insert(s[i]);
	}
	cout << (st.size() == 26 ? "YES" : "NO") << "\n";
}
