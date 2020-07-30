#include <iostream>
#include <vector>
#include <string>

enum open_modes {input = 1, output, append };


int main() {

	open_modes om  = append;
	std::vector<std::string> open_mode_table;
	
	open_mode_table.push_back("");
	open_mode_table.push_back("input");
	open_mode_table.push_back("output");
	open_mode_table.push_back("append");

	std::cout << input << " " << output << " " << append << " " << om << std::endl;
 
	std::cout << open_mode_table[input] << " " << open_mode_table[output] << " " << open_mode_table[append] << std::endl;

	
	return(0);
}
