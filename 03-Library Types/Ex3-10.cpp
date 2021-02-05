#include <iostream>
#include <cctype>
#include <string>


int main() {
	
	std::string s;
	std::string s1;

	unsigned int count = 0;
	std::string::size_type index = 0;

	std::cout << "Enter String To Remove Punctuation" << std::endl;

	getline(std::cin,s);

	for(index = 0; index != s.size();index++) {

		if(!(ispunct(s[index]))) {

			s1+=s[index];
		}
	}
	
	std::cout << "Punctuation Removed: " << s1 <<std::endl;

	return (0);
}
