// 22_ValidPalindromeStringIgnoringCases.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "Solution.h"
#include <conio.h>

int main(int argc, char *argv[])
{
	std::cout << "Enter a String: ";
	std::string s;
	std::cin >> s;

	Solution obj;
	bool value = obj.isPalindrome(s);
	if (value == true)
		std::cout << "Given String is Palindrome";
	else
		std::cout << "Given String is not Palindrome";
	_getch();
	return 0;
}

