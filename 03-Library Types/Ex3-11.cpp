#include <iostream>
#include <vector>

using std::vector;
using std::string;

int main() {

	vector< vector<int> > ivec;
	//vector<string> svec = ivec; //	error error: conversion from 
				    //	‘std::vector<std::vector<int> >’ to non-scalar type ‘std::vector<std::__cxx11::basic_string<char> >’ requested
				    //	  vector<string> svec = ivec;
                        	    //			        ^~~~
	vector<string> svec(10,"null");
}

