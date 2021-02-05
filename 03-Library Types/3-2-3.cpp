#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;


int main(void) {
	
	string st("The Expanses of spirit\n");

	string st2;
	
	string big = "big", small = "small";

	cout <<"The Size Of "<< st << "is " << st.size() << " Characters Including New Line" << endl;

	if(st.size()==0) {
		cout <<"String is Empty Checked By: size()" << endl;
	
	} else {
		
		cout <<"String is NOT Empty Checked By: size()" << endl;
	}

	if(st.empty()){
		
		cout <<"String is Empty Checked By: empty()" << endl;
	} else {

		cout <<"String is NOT Empty Checked By: emptty()" << endl;
	}

	if(small == big){
		cout << "small == big " << endl;
	} else if(small <= big) {
		cout << "small <- big " << endl;
	} else if(small >= big) {
		cout << "small >= big " << endl;
	}
	
	st2 = st;
	
	cout << "Assgnment is Done st2 = st : " << st2 << endl;  

	string fname("Rohit");
	string lname("Kulkarni");
	
	string fullname = fname + lname;

	cout << "Concatination Done " << fullname << endl;
	
	string s4 = fname + " " + lname;
	
	cout << "Concatination Done " << s4 << endl;

	string s5 = fname + ", ";
	cout << "Concatination Done " << s5 << endl;

//	string s6 = "Hello" + ", ";
//	cout << "Concatination Done " << s6 << endl;

	string s7 = fname + ", " + "Kulkanri";
	cout << "Concatination Done " << s7 << endl;

//	string s8 = "Rohit" + ", " + lname;
//	cout << "Concatination Done " << s8 << endl;

	return(0);
}
