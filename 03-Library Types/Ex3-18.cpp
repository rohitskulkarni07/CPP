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
	int i;
	int unsigned ui_count = 0;

	while(getline(cin,word)) {

		for(i = 0; i < word.length(); i++) {
			word[i] = (char)toupper(word[i]);
		}
		word[i] = ' ';
		text.push_back(word);

		ui_count = ui_count < 9 ? ui_count+=1:0;
		if(ui_count==0){
			break;
		}

	}

	cout << "You Entered Following Strnings: "<< endl;

	for(vector<string>::iterator iter = text.begin(); iter != text.end(); iter++) {

		cout<<(*iter);

	}
}
