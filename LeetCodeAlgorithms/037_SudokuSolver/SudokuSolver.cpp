#include "SudokuSolverSolution.h"

void Solution::solveSudoku(vector<vector<char>>& board)
{
	int x = 0;
	int y=0;
	//find the next empty value
	while ()
	{

	}
	// Solve the single cell
	
}

int validateValue(int x, int y, int value)
{
	//cheking the value against its row and column for any duplicate values
	for ()
	{

	}

	//checking the value against its 3X3 square
	for ()
	{

	}
}


int solveSingleCell(int x, int y)
{
	int valid;
	for (int value = 1; value <= 9; value++)
	{
		valid = validateValue(x, y, value);
		if (valid != 0)
			break;
	}

	return valid;
}