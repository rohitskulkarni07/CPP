#include <iostream>

int main() {
	
	int sum = 0, value;
	
	std::cout << "Enter Numbers: " << std::endl;

	while(std::cin >> value) { // read until the EOF or end-of-file character encounters ( ctr + d is EOF in UNIX/LINUX BASED OS)
		sum +=value;
	}

	std::cout<< "Sum :" << sum << std::endl;
	
	return 0;
}
