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

	string word;
	vector<string> text;
	
	int count = 0;
	int i;
	cout << "Enter 10 Strings" <<endl;

	while(getline(cin,word)) {

		for(i=0; i < word.length(); i++) {
			word[i] = (char)toupper(word[i]);
		}
		word[i] = ' ';
		text.push_back(word);
		count++;
		if(count == 8) {
			break;
		}
	}
	
	cout << "You Entered Following String: "<< endl;

	for(vector<int>::size_type ix = 0; ix!=text.size(); ++ix ) {
		cout<<text[ix];
	}
	return(0);
}
