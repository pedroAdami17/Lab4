#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

bool isPalindrome(string str, int firstL, int lastL)
{
	if (firstL >= lastL)
	{
		return true;
	}

	if (str[firstL] != str[lastL])
	{
		return false;
	}

	return isPalindrome(str, firstL + 1, lastL - 1);
}

void reverseString(string str)
{
	if (str.size() == 0)
		return;

	reverseString(str.substr(1));
	cout << str[0];
}

int main()
{
	int userPick;
	string userString;
	char ch;

	cout << "Hello. Plese pick one option: \n1 -> Palindrome \n2 -> Reverse String \n3 -> Quit" << endl;
	cin >> userPick;

	if (userPick == 1)
	{
		cout << "Enter your string to check if it is palindrome. " << endl;
		cin >> userString;
		string str = userString;
		int len = str.length();

		if (isPalindrome(str, 0, len - 1))
		{
			cout << "Palindrome" << endl << endl;
		}
		else {
			cout << "Not Palindrome" << endl << endl;
		}
		return main();
	}
	else if (userPick == 2)
	{
		cout << "Enter your string to reverse." << endl;
		cin >> userString;
		reverseString(userString);
		cout << "\n\n";
		return main();
		
	}
	else if (userPick == 3)
	{
		exit;
	}
	else
	{
		cout << "Invalid number. Please try again" << endl << endl;
		return main();
	}
	

	return 0;
}



