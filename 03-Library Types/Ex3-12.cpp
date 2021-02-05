#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main() {

	vector<int> ivec1;
	vector<int> ivec2(10);
	vector<int> ivec3(10,42);

	vector<string> svec1;
	vector<string> svec2(10);
	vector<string> svecn(1,"\0");
	vector<string> svec3(10,"Hello");
	
	cout << "ivec1 empty : " << (ivec1.empty() ? "true" : "false") << "\n" <<endl;
//	cout << ivec1[0] << " " << ivec1[1] << " " << ivec1[2] << " " << ivec1[3] << endl;

	cout << "ivec2 empty : " << (ivec2.empty() ? "true" : "false") << endl;
	cout << ivec2[0] << " " << ivec2[1] << " " << ivec2[2] << " " << ivec2[3] << "\n" <<endl;

	cout << "ivec3 empty : " << (ivec3.empty() ? "true" : "false") << endl;
	cout << ivec3[0] << " " << ivec3[1] << " " << ivec3[2] << " " << ivec3[3] << "\n" << endl;

	cout << "svec1 empty : " << (svec1.empty() ? "true" : "false") << "\n" << endl;
//	cout << svec1[0] << " " << svec1[1] << " " << svec1[2] << " " << svec1[3] << endl;

	cout << "svec2 empty : " << (svec2.empty() ? "true" : "false") << endl;
	cout << svec2[0] << " " << svec2[1] << " " << svec2[2] << " " << svec2[3] << "\n" <<endl;

	cout << "svec3 empty : " << (svec3.empty() ? "true" : "false") << endl;
	cout << svec3[0] << " " << svec3[1] << " " << svec3[2] << " " << svec3[3] <<"\n"<< endl;

	cout << "ivec1 size  : " << ivec1.size() << endl;
	cout << "ivec2 size  : " << ivec2.size() << endl;
	cout << "ivec3 size  : " << ivec3.size() << "\n" <<endl;

	cout << "svec1 size  : " << svec1.size() << endl;
	cout << "svec2 size  : " << svec2.size() << endl;
	cout << "svec3 size  : " << svec3.size() << "\n" <<endl;

	return(0);
}
