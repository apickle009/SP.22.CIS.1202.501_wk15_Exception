//Tony Pickle
//SP.22.CIS.1202.501
//4.29.2022

#include <iostream>

using namespace std; 

char character(char, int); 

int main() {
	char letter, temp;
	int num; 

	cout << "Please enter a letter: "; 
	cin >> letter; 
	cout << "Please enter a number: "; 
	cin >> num; 

	temp = character(letter, num);

	cout << temp;

	return 0; 
}


char character(char start, int offset) {
	
	char temp ; 

	temp = start + offset;


	return temp; 
}