//What are the initial values (if any), of each of the following variables?

#include <iostream>
#include <stdio.h>

std::string global_str;
int global_int;

int main(void ) {
	
	int local_int;
	std::string local_str;

	std::cout << "Global String : "<< global_str << "\nLocal String : "<< local_str <<""<< std::endl;
	std::cout << "Global Integer : "<< global_int << "\nLocal Integer : "<< local_int <<""<< std::endl;

	return(0);
}
 
