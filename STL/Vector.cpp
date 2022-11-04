#include<bits/stdc++.h>
using namespace std;
vector<int> v;

void printVec(vector<int>v) {
	for(int i = 0; i < (int)v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(){
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	sort(v.rbegin(), v.rend());
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}cout << endl;
	int mx = *min_element(v.begin(), v.end());
	cout << INT_MIN << endl;
	cout << INT_MAX << endl;
	bool ok;
	ok = is_sorted(v.begin(), v.end());
	cout << ok << endl;
	v.push_back(1);
	v.push_back(2);
	v.push_back(1);
	v.push_back(4);
	v.push_back(10);
	v.push_back(11);
	prnt();
	v.pop_back();
	prnt();
	cout << v.front() << "\n";
	//Removes the element present at position.  
	v.erase(v.begin()+4); //(erases the fifth element of the vector v)
	//Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
	v.erase(v.begin()+2,v.begin()+5); //(erases all the elements from the third element to the fifth element.)
}
