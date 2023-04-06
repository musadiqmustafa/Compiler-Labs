#include <iostream>
#include <regex>
 
using namespace std;
int main()
{
    string a = "Pakistan is my Love,I Love Pakistan ";
 
    // Here b is an object of regex (regular expression)
    regex b("(Pakistan)(.*)"); // pakistan  followed by any character
 
    // regex_match function matches string a against regex b
    if ( regex_match(a, b) )
        cout << "String 'a' matches regular expression 'b' \n";
 
    // regex_match function for matching a range in string
    // against regex b
    if ( regex_match(a.begin(), a.end(), b) )
        cout << "String 'a' matches with regular expression "
                "'b' in the range from 0 to string end\n";
 
    return 0;
}