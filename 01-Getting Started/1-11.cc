#include <iostream>

int main() {
	
	int sum = 0, val = 55;

	while(val<=100) {

		//updating the value of sum
		sum+=val;
		//prefix increament of value
		++val;
	}
	
	std::cout << "Sum of 55 to 100 inclusive is " << sum << std::endl;


	return 0;
}
