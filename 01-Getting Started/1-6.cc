//illeagal code 

#include<iostream> 

int main() {

	std::cout << "Enter two numbers:" << std::endl;

	int v1,v2;
	std::cin >> v1 >> v2;

	std::cout << "The sum of " << v1;
		  << " and " << v2; 		//illegal statement as no primary operand present.
   		  << " is " << v1 + v2;		//illegal statement as no primary operand present.
		  << std::endl;			//illegal statement as no primary operand present.

	

	return 0;
}
