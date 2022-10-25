#include<bits/stdc++.h>
using namespace std;

int main(){
	map<char, int> mp;
	string s;
	cin >> s;
	for(int i = 0; i < (int)s.size(); i++) {
		mp[s[i]]++;
	}
	for(char i = 'a'; i <= 'z'; i++) {
		if(mp[i])cout << i << " " << mp[i] << "\n";
	}
}
