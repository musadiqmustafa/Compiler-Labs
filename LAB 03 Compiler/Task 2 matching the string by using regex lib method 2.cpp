#include <iostream>
#include <regex>
#include <string.h>

using namespace std;
int main(){
	//Target sequence 
	string s = "Pakistan is my Love,I Love Pakistan";
	// An object of regex for pattern to be searched 
	regex r("Pakistan[a-zA-Z]+");
	//flag type for determing the matching behaviour
	// here it is for matches on string object
	smatch m;
	// regex_search() for searching the regex pattern
	// 'r' it is int the string 's','m ids flag for determining matching behaviour
	regex_search(s,m,r);
	//for each loop
	for(auto x:m){
		cout<<x<< "  ";
	}
	return 0;
}