#include "stdafx.h"
#include "Solution.h"


Solution::Solution()
{
}


Solution::~Solution()
{
}

bool Solution::isPalindrome(int x)
{
	int lo, hi;
	int d = 1;

	if (x < 0) {
		return false;
	}

	// find the most significant digit
	while (x / d >= 10) {
		d *= 10;
	}

	while (x > 0) {
		lo = x % 10;
		hi = x / d;
		if (lo != hi) {
			return false;
		}
		// remove most and least significant digits
		x %= d;
		x /= 10;
		d /= 100;
	}

	return true;
}