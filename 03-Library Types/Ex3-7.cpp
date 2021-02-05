// cpp include
#include <iostream>
#include <string>
#include <cctype>

int main() {
	
	std::string s1,s2;	
	unsigned int count;

	std::cout << "Enter 1st String" << std::endl;
	getline(std::cin, s1);
	
	std::cout << "Enter 2nd String" << std::endl;
	getline(std::cin, s2);

	if(s1.size() == s2.size()) {

		for(std::string::size_type i = 0; i < s1.size(); i ++) {
		
			if(s1[i] == s2[i]) {
				count++;
				continue;
			}else {
				break;
			}
		}

		if(count == s1.size()) {
			std::cout << "Both Are Same" << std::endl;
		} else {
			std::cout << "Length is same but not content" << std::endl;
		}

	} else {
		if(s1.size()>s2.size()){
                         std::cout << s1 << ": is large" << std:: endl;
                 } else {
                         std::cout << s2 << ": is large" << std::endl;
                 }
	}
	return(0);
}
