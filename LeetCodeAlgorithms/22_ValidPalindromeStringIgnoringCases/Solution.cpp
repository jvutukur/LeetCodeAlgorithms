#include "stdafx.h"
#include "Solution.h"

bool Solution::isPalindrome(std::string s)
{
	int left, right;
	left = 0;
	right = s.length() - 1;
	while (left < right)
	{

		while (left < right && !isalnum(s[left]))
			left++;


		while (left < right && !isalnum(s[right]))
			right--;

		if (toupper(s[left++]) != toupper(s[right--]))
			return false;


	}
	return true;
}


Solution::Solution()
{
}


Solution::~Solution()
{
}
