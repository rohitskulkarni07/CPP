#include <iostream>

enum open_modes {input = 1, output, append };

int main() {

	open_modes om  = append;

	std::cout << input << " " << output << " " << append << " " << om << std::endl;
 
	return(0);
}
