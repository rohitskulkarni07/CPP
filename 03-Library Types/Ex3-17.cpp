#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {

	vector<int> ivec(7);	
		
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); iter++) {
		cout << "Enter Next Element" << endl;
		cin >> *iter;
	}
	
	cout << "\nPair Wise Additon 1st + 2nd ,2nd + 3rd And So on . . .\n"<< endl;
	
	for(vector<int>::iterator iter = ivec.begin(); iter < ivec.end()-1; iter++) {
		
		cout << (*iter) + *(iter+1) << endl;

	}

	cout << "\nPair Wise Additon 1st + last ,2nd + 2nd last And So on . . .\n" <<endl;      
	
	vector<int>::iterator iter1 = ivec.begin();	
	vector<int>::iterator iter2 = ivec.end();
	
	for( ; iter1 != ivec.begin()+ivec.size()/2;iter1++,--iter2) {
		cout << (*iter1) + *(iter2-1) << endl;
	}
	if(ivec.size()%2 != 0) {
		
		cout << "Cannot Add Middle Element(Odd Size)" << endl;

	}	
}


