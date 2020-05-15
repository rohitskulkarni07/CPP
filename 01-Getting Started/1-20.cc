#include <iostream>

int main() {

	std::cout << "Enter two numbers" << std::endl;

	int num1,num2,c=0,sum = 0;

	std::cin >> num1 >> num2;
	
	for( int i = num1; i<=num2 ; ++i) {
		sum+=i;	
	}
	std::cout << "Sum of "<< num1 << " to " << num2 << " is " << sum << std::endl;

	return  0;
}
