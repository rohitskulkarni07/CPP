#include <iostream>

int main() {

	int iVal = 1024;
	int &refToIval = iVal;

	const int iValConst = 512;
	const int &refToIvalConst = iValConst;
	
	int i = 42;
	//Legal For Only Const References
	const int &r = 42;
	const int &r2 = r + i;
	const int &r3 = i;	
	int &reftoref = refToIval;

	double dval = 3.14;
	const int &ri = dval;
	

	/*
	
	int &refToIval = iValConst;
	error: binding reference of type ‘int&’ to ‘const int’ discards qualifiers

	
	int &refToIval;
	error: ‘refToIval2’ declared as reference but not initialized
  	

	int &refToIval = 1024;
	error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’	
	
	*/
	
			
	std::cout << "iVal = " << iVal <<std::endl;
	std::cout << "refToIval = " << refToIval <<std::endl;
	std::cout << "&iVal = " << &iVal <<std::endl;
	std::cout << "&refToIval = " << &refToIval <<std::endl;
	std::cout << "iValConst = " << iValConst <<std::endl;
	std::cout << "&iValConst = " << &iValConst <<std::endl;
	std::cout << "refToIvalConst = " << refToIvalConst <<std::endl;
	std::cout << "&refToIvalConst = " << &refToIvalConst <<std::endl;
	std::cout << "Dval = " << dval <<std::endl;
	std::cout << "&Dval = " << &dval <<std::endl;
	std::cout << "ri = " << ri <<std::endl;
	std::cout << "&ri = " << &ri <<std::endl;	
	std::cout << "i = " << i <<std::endl;
	std::cout << "&i = " << &i <<std::endl;
	std::cout << "r = " << r <<std::endl;
	std::cout << "r2 = " << r2 <<std::endl;
	std::cout << "r3 = " << r3 <<std::endl;
	std::cout << "&r = " << &r <<std::endl;
	std::cout << "&r2 = " << &r2 <<std::endl;
	std::cout << "&r3 = " << &r3 <<std::endl;

	refToIval = 2096;
	
	/*
	
	refToIvalConst = 128;
	error: assignment of read-only reference ‘refToIvalConst’
	
	*/
	std::cout << "iVal = " << iVal <<std::endl;
 	std::cout << "refToIval = " << refToIval <<std::endl;
        std::cout << "&iVal = " << &iVal <<std::endl;
 	std::cout << "&refToIval = " << &refToIval <<std::endl;
	std::cout << "iValConst = " << iValConst <<std::endl;
        std::cout << "&iValConst = " << &iValConst <<std::endl;
 	std::cout << "refToIvalConst = " << refToIvalConst <<std::endl;
 	std::cout << "&refToIvalConst = " << &refToIvalConst <<std::endl;
 	std::cout << "&refToref = " << reftoref <<std::endl;


	refToIval += 2096;
	/*
	refToIvalConst += 128;
	error: assignment of read-only reference ‘refToIvalConst’
	*/

        std::cout << "iVal = " << iVal <<std::endl;
        std::cout << "refToIval = " << refToIval <<std::endl;
        std::cout << "&iVal = " << &iVal <<std::endl;
        std::cout << "&refToIval = " << &refToIval <<std::endl;
	std::cout << "iValConst = " << iValConst <<std::endl;
	std::cout << "&iValConst = " << &iValConst <<std::endl;
	std::cout << "refToIvalConst = " << refToIvalConst <<std::endl;
	std::cout << "&refToIvalConst = " << &refToIvalConst <<std::endl;

}
