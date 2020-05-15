#include <iostream>

int main() {

	int sum = 0;
	int i;
	int count = 0;

	for(i = -100; i<=100; ++i ) {

		std::cout << "count : " << count << " | "<< sum  << " + " << i << " = " << sum <<std::endl;
		sum += i;
		count ++;
	}
	std::cout << "value of sum : " << sum << " the value of iterator : " << i << std::endl;

	return 0;
}
