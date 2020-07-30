#include <iostream>

int main() {
	
	int iValue = 0;
	int iPow = 0;
	long long int lResult = 1;

	std::cout << "Eneter a Exponent :\t";
	std::cin >> iValue;
	std::cout << std::endl;

	std::cout << "Eneter a Power :\t";
	std::cin >> iPow;
	std::cout << std::endl;

	for(int i = 0;i < iPow; i++) {
		lResult = lResult * iValue;
	}
	
	std::cout << iValue <<" Raised to the power of " << iPow << "\t: " << lResult << std::endl;

	return(0);
}
