#include <iostream>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;


int main() {

	int base;
	int pow;
	long unsigned int result = 1;

	int i = 0;
 
	cout << " Enter Base : ";
	cin  >> base;

	cout << " Enter Power : ";
	cin  >> pow;

	if(pow == 0 || base == 0 ){
		exit(0);
	}

	for(i = 1; i <= pow; i++) {
		result = result * base;	
	}
	
	cout << "Result " << result << endl;

	return(0);
}
/*
rohit@rohit-XPS-15-9560:~/CPP/03-Library Types$ vi 3-1.1.cpp
rohit@rohit-XPS-15-9560:~/CPP/03-Library Types$ g++ 3-1.1.cpp
rohit@rohit-XPS-15-9560:~/CPP/03-Library Types$ ./a.out 
 Enter Base : 2
 Enter Power : 2
Result 4
rohit@rohit-XPS-15-9560:~/CPP/03-Library Types$ 
*/
