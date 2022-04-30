//Tony Pickle
//SP.22.CIS.1202.501
//4.29.2022

#include <iostream>
#include <string>

using namespace std; 

char character(char, int); 
class invalidCharacterExcpeption {};

class invalidRangeException {};

class invalidTransitionException {};



int main() {
	char letter, temp;
	int num; 

	cout << "Please enter a letter: "; 
	cin >> letter; 
	cout << "Please enter a number: "; 
	cin >> num; 

	temp = character(letter, num);

	cout << "\n" << temp;

	return 0; 
}


char character(char start, int offset) {
	char temp;
	
	temp = start + offset;
	try
	{
		if (start > 122 || start < 65 || (start < 97 && start > 90) )
		{
			throw invalidCharacterExcpeption();
		}
		else if (temp < 65 || temp > 122 || (temp < 97 && temp > 90))
		{
			throw invalidRangeException();
		}

		else if (((start >= 95 && start <= 122) && temp >= 65 && temp <= 90) || ((temp >= 95 && temp <= 122) && start >= 65 && start <= 90))
		{
			throw invalidTransitionException();
		}
		else
		{
			return temp;
		}

	}
	catch (invalidCharacterExcpeption)
	{
		cout << "Invalid Letter Entered! ";
		return ' ';
	}

	catch (invalidRangeException)
	{
		cout << "Invalid Number Entered! ";
		return ' ';
	}

	catch (invalidTransitionException)
	{
		cout << "Invalid Letter and Number combincation entered! ";
		return ' ';
	}

	
}