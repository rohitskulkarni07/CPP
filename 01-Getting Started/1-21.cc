#include <iostream>
#include "/home/rohit/CPP/cpp_primer/1/Sales_item.h"

int main() {

	Sales_item total, trans;
	
	if(std::cin >> total){
	
		while(std::cin>> trans) {
			if(total.same_isbn(trans)) {
				total = total + trans;
			} else {
				std::cout << total << std::endl;
				total =  trans;
			}
		
		}
		std::cout << total << std::endl;
		
	} else { 
		std::cout << "NO DATA ?!" << std::endl;
		return -1;

	}

	return 0;

}
