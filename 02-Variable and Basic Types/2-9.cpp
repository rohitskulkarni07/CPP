#ifndef NOTDEF
#define NOTDEF 100
#endif

#include <iostream>


int main (void) {

	extern int a;
 
	std::cout << "NOTDEF VALUE : " << NOTDEF << std::endl;
	std::cout << "a Value From Header: " << a << std::endl;
	return(0);

}

/*
rohit@rohit-XPS-15-9560:~/CPP/02-Variable and Basic Types$ g++ -c 2-9.cpp myheader.cpp 
rohit@rohit-XPS-15-9560:~/CPP/02-Variable and Basic Types$ g++ 2-9.o myheader.o 
rohit@rohit-XPS-15-9560:~/CPP/02-Variable and Basic Types$ ./a.out 

*/
