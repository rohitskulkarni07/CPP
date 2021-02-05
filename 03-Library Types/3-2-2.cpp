#include <iostream>
#include <string>



using std::cin;
using std::string;
using std::cout;

int main() {
	
	string s;
	cin >> s;
	
/*
		cout << s;
		error: ‘cout’ was not declared in this scope
		note: suggested alternative:
		In file included from 3-1.cpp:1:0:
		/usr/include/c++/7/iostream:61:18: note:   ‘std::cout’
		extern ostream cout;  /// Linked to standard output
	
*/
	
	cout << s << std::endl; 

	return(0);
}
