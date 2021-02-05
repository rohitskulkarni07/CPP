//subscript and cctype function

#include<iostream>
#include<string.h>

int main() {

	std::string s1 = "Hello, World!@123";
	
	std::cout << s1 << std::endl;
	
	for(std::string::size_type i = 0; i < s1.size(); i++) {
			
		if(isalnum(s1[i])) {
	
			if(isalpha(s1[i]) && isupper(s1[i])){
			
				std::cout<< s1[i]<<" is uppercase letter and its lowercase eqivalent is " << (char)tolower(s1[i]) <<std::endl;

			} else if(isalpha(s1[i]) && islower(s1[i])) {
				
				std::cout<< s1[i]<<" is lowercase letter and its uppercase eqivalent is " << (char)toupper(s1[i])<<std::endl;

			} else if(isdigit(s1[i])) {
 
                        	 std::cout<< s1[i]<<" is digit"<<std::endl;
                 	}
		
		} else if (iscntrl(s1[i])) {
		
			std::cout<< s1[i]<<" is control character" << std::endl;

		} else {
	
			std::cout<< s1[i]<<" is not a control charachter" << std::endl;
		}

		if(isspace(s1[i])) {
	
			std::cout<< s1[i]<<" is space" << std::endl;
		}
		
		if(ispunct(s1[i])) {
	
			std::cout<< s1[i]<<" is punctuation" << std::endl;
		}
	}	
	return(0);
}


/*______________________some other function______________________________________
isgraph()	true if charachter is not space but printable
isprint()	true if charachter printable
isspace()	true if charachter is space
islower()	true if charachter is lowercase
isupper()	true if charachter is upercase
ispuct()	true if punctuation
isxdigit()	true if hexadecimal

tolower()	return uppercase equivalent
toupper()	return lowercase equivalent

*/

