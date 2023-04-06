// C++ program to demonstrate working of regex_replace()
#include <iostream>
#include <string>
#include <regex>
#include <iterator>
using namespace std;

int main()
{
	string s = "I am looking for Pakistanfamily \n";
	
	// matches words beginning by "Geek"
	regex r("Pakistan[a-zA-z]+");
	
	// regex_replace() for replacing the match with 'geek'
	cout << std::regex_replace(s, r, "friend");
	
	string result;
	
	// regex_replace( ) for replacing the match with 'geek'
	regex_replace(back_inserter(result), s.begin(), s.end(),
				r, "friend");

	cout << result;

	return 0;
}
