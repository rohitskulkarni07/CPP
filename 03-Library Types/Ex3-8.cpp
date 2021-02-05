// cpp include
#include <iostream>
#include <string>
#include <cctype>


//main 

int main() {
	
	std::string s1,s2,s3,s4,s5;	
	unsigned int flag = 0;

	std::cout << "Enter 1st String" << std::endl;
	getline(std::cin, s1);
	
	std::cout << "Enter 2nd String" << std::endl;
	getline(std::cin, s2);
	
	std::cout << "Enter 3rd String for to seprate" << std::endl;
	getline(std::cin, s3);

	s1 = s1 + " ";
	s1 = s1 + s2;

	std::cout << "String is concatenated " << s1 << std::endl;

	for(std::string::size_type i = 0; i < s3.size() ; i++ ) {
		
		if(flag == 0) {
			s4[i] = s3[i];
		} else if(isspace(s3[i])) {
			flag = 1;
			continue;
		} else {
			s5[i] = s3[i];	
		}
	}
	std::cout << s1 << " is string one" << std::endl;
	std::cout << s2 << " is string two" << std::endl;
	return(0);
}
