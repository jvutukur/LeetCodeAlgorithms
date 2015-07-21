#include "Solution.h"
#include <vector>
#include <map>

using namespace std;

//empty cell contains .
bool Solution::isValidSudoku(std::vector<std::vector<char>>& board)
{
	std::map<char, int> m;
	std::map<char, int>::iterator it;
	//check horizontal lines for duplicate values
	for (int i = 0; i < 9; i++)
	{

		for (int j = 0; j < 9; j++)
		{
			const char c = board.at(i).at(j); //char at ith row and jth column
			if (c != '.')
			{
				it = m.find(c);
				if (it == m.end()) //check whether element is in map or not 
				{
					m.insert(std::pair<char, int>(c, 1));//insert element into map
				}
				else
				{
					return false; //if element is in map.
				}
			}

		}
		m.clear();
	}


	//check the vertical lines
	for (int i = 0; i < 9; i++)
	{

		for (int j = 0; j < 9; j++)
		{
			const char c = board.at(j).at(i); //char at ith row and jth column
			if (c != '.')
			{
				it = m.find(c);
				if (it == m.end()) //check whether element is in map or not 
				{
					m.insert(std::pair<char, int>(c, 1));//insert element into map
				}
				else
				{
					return false; //if element is in map.
				}
			}

		}
		m.clear();
	}


	int count = 1;
	//check the each block
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				
				const char c = board.at(j+((count-1)/3)*3).at(k + ((count - 1)%3) * 3); //char at ith row and jth column
				if (c != '.')
				{
					it = m.find(c);
					if (it == m.end()) //check whether element is in map or not 
					{
						m.insert(std::pair<char, int>(c, 1));//insert element into map
					}
					else
					{
						return false; //if element is in map.
					}
				}
			}
			
		}
		count++;
		m.clear();
	}



}

Solution::Solution()
{
}


Solution::~Solution()
{
}
