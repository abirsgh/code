#include<bits/stdc++.h>
using namespace std;
set<int> st;

void prnt() {
	for(auto it = st.begin(); it != st.end(); it++) {
		cout << *it << " ";
	}cout << endl;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		st.insert(x);
	}
	prnt();
	st.erase(st.find(3));
	prnt();
	for(char i = 'A'; i <= 'Z'; i++)cout << i << " ";
}
