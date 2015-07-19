// 9_PalindromeNumberWithoutExtraSpace.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Solution.h"

#include <conio.h>

int main(int argc, char *argv[])
{
	std::cout << "Enter an integer value";
	int num;
	std::cin >> num;

	Solution obj;
	bool value=obj.isPalindrome(num);
	if (value == true)
		std::cout << std::endl<<"Given Number is Palindrome";
	else
		std::cout << std::endl<<"Given Number is not palindrome";
	
	_getch();
	return 0;
}

