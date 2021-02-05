#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	
	vector<int>::size_type inputSize = 0;

	int inputElement = 0;

	vector<int> ivec;

	cout << "Please Enter Vector Size: ";	
	cin >> inputSize;


	for(vector<int>::size_type ix = 0; ix != inputSize; ix++) {
		cout << "Enter " << (ix+1) <<"th Element: " <<endl;
		cin >> inputElement;
	
		ivec.push_back(inputElement);
	}

	cout << "\nPair Wise Additon 1st + 2nd ,2nd + 3rd And So on . . .\n"<< endl;	

	if((inputSize%2)!=0){
		cout << "\nVector Has Odd Number Of Element last Member Will Not Be Added...\n" << endl;
	}
		
	for(vector<int>::size_type ix= 0; ix < inputSize; ix++) {
	
		if(ix==inputSize-1){
			break;
		}
		cout << "Addition Of Pair " << ivec[ix] << " + " << ivec[ix+1] << " : "<<ivec[ix] + ivec[ix+1]<<endl;	
	}

	cout << "\nPair Wise Additon 1st + last ,2nd + 2nd last And So on . . .\n" <<endl;	

	if((inputSize%2)!=0) {
		cout << "\nVector Has Odd Number Of Element, Middle Element " <<ivec[inputSize/2] <<" Will Not Be Added...\n" << endl;
	}

	for(vector<int>::size_type ix = 0; ix < inputSize/2;ix++) {
		cout << "Addition Of Pair " << ivec[ix] << " + " << ivec[ivec.size()-1 - ix] << " : "<<ivec[ix] + ivec[ivec.size()-1-ix]<<endl;
	}
	return(0);
}
