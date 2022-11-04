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
	
	sort(v.rbegin(), v.rend());      //Sort a Vector

	int mn = *min_element(v.begin(), v.end()); //Finding minimum element
	int mx = *max_element(v.begin(), v.end()); //Finding maximum element
	
	cout << INT_MIN << endl;
	cout << INT_MAX << endl;
	
	bool ok;
	ok = is_sorted(v.begin(), v.end());
	cout << ok << endl;
	
	v.push_back(1);  	//Add a value in the last
	v.pop_back();    	//Delete last value
	printVec(v);
	cout << v.front() << "\n";  //Removes the element present at position.  
	
	v.erase(v.begin()+4); //(erases the fifth element of the vector v)
	
	//Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
	v.erase(v.begin()+2,v.begin()+5); //(erases all the elements from the third element to the fifth element.)
}


int main(){
	vector<int>v(10,3) // 10 size ka vector, all elelments will be 3
	vector<int>v2=v    // copy a vector //Time Complexity O(n)
}
