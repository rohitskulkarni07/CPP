#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {

	vector<int> ivec(10); //how many times, what?
	int x;

	cout << "-- Enter Elements --  " << endl;

	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); iter++) {
		cin >> x;
		x = x*2;
		*iter = x;
	}

	cout << "-- Twice Element --  " << endl;
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); iter++) {
		cout << (*iter) << endl;
	}
}
