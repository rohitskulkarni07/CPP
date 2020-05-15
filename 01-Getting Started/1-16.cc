#include <iostream>

int main() {
	
	std::cout << "Enter two Numbers:" << std::endl;
	
	int v1,v2;
	std::cin >> v1 >> v2; 	//read input

	if(v1 <  v2) {
		
		std::cout << "MAX : " << v2 << " MIN : " << v1 << std::endl;
		return 0;
		
	} else if (v1 > v2){
		
		std::cout << "MAX : " << v1 << " MIN : " << v2 << std::endl;
		return 0;
		
	} else {
	
		std::cout << "MAX & MIN : " << v1 << std::endl;
	}

	return 0;
}
