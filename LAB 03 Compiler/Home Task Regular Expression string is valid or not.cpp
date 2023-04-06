#include <vector>
#include <iostream>
#include <string>
#include <regex>
using namespace std;
bool regexContains(std::string _text, std::string _regex){
    std::regex _r(_regex);
    return std::regex_search(_text, _r);
}

int main(){
	string myString;
	string regex;
	cout <<"Checking the Input sunstring are valid or not "<<std::endl;
	cout<<"Enter the main Regular Expression "<<std::endl;
	cin>>myString; 
	cout<<"Enter the string you want to Check"<<std::endl;
	cin>>regex;
	if (regexContains(myString,regex)==1){
		cout<<"String is Valid"<<std::endl;
	}
	else{
		cout<<"String is Not valid"<<std::endl;
	}
	
	return 0;
}