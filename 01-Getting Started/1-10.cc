#include <iostream>

int main() {
	
	int sum = 0;

	for (int val = 50; val <= 100; ++val ) {
		sum+=val;
	}
	
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
	/*
	int i;
	for(i = 0; i<=0 ; ++i)
		std::cout << i << std::endl;


	std::cout << i << std::endl;
	*/

	return 0;
}
