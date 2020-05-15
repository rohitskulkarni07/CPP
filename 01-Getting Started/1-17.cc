#include <iostream>

int main() {

	int num = 0, count = 0;
	std::cout << "Enter series of number" << std::endl;

	while(1) {

		std::cout << "enter number or press 0 to exit" << std::endl;
		std::cin >> num ;
		if(num < 0) {
			count ++;
		}else if(num == 0){
			break;
		}
		
	}

	std::cout << "Negative Numbers : " << count << std::endl ;

	return 0;
}
