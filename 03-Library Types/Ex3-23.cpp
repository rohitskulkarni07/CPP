#include <iostream>
#include <string>
#include <bitset> //for library type 'bitset'

using std::cout;
using std::cin;
using std::endl;
using std::string;

using std::bitset; //for library type 'bitset'

int main(void) {
	
	bitset<64> bitvec(32);	
	//  0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1  0  0  0  0  0
	//															^  ^  ^  ^  ^  ^
	//															32 16 8	 4  2  1
	
	bitset<32> bv(1010101);
	//	00000000000011110110100110110101
	
	
	string bstr;
	cin >> bstr;

	bitset<8> bv1(bstr);

	cout << bitvec << endl;
	cout << bv << endl;
	cout << bv1 << endl;
	return(0);
}

