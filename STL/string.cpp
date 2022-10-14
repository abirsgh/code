#include <bits/stdc++.h>

using namespace std;
int main() {

	string s = "aaAsca caba";
	string ss = s;
	reverse(ss.begin(), ss.end());
	if(s == ss)cout << "Palindrom\n";
	else cout << "NO" << "\n";
	cout << s.substr(2, 6);

	string s = "aBcAcnd";
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout << s << endl;
}
