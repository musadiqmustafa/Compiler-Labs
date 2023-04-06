#include <iostream>
#include <regex>
#include <string>
#include <iterator>

using namespace std;

int main(){
	string input;
	regex integer_expr("(\\+|-)?[[:digit:]]+");
	while(true){
		cout<<"Enter the input: ";
		cin>>input;
		if(!cin){
			break;
		}
		if(regex_match(input, integer_expr)){
			cout<<"Input is an integer"<<endl;
		}
		else{
			cout<<"Invalid input : Not an integer"<<endl;
		}
	}
	return 0;
}