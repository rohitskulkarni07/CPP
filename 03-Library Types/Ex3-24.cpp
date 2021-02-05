#include <iostream>
#include <string>
#include <cctype>
#include <bitset>

using std::bitset;
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void) {
	
	bitset<32> bitvec;
	int prev = 0 ,next = 1 , num = 0;
	cout << "Before Turning On Bits : " << bitvec << endl;

	for(int i = 0 ; i < 7; i++ ) {
		
		
		num = prev + next;
		if(num < 1){
			continue;
		}
		bitvec.set(num);
		prev = next;
		next = num;
	}

	cout << "After Turning On Bits : " << bitvec << endl;
}
