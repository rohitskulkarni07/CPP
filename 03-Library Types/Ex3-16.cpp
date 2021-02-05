#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {

	vector<int> ivec(10,42); //how many times, what?

	for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++) {
		cout << ivec[ix] << " ";
	}
}
