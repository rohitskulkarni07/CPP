#include <iostream>

int main() {

	std::cout << "Enter two numbers" << std::endl;
	int num1,num2,c=0;
	std::cin >> num1 >> num2;
	
	for( int i =num1; i<=num2 ; ++i) {
		if (c%10 == 0){
			std::cout<<"\n";
		}
		c++;

		std::cout << i <<" ";	
	}
	std::cout << "\n";
	return  0;
}
