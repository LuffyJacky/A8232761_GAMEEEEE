#include "sudokuOutput.h"
#include <iostream>
#include <string>
using namespace std;

void Output::final_result()
{
	if (point[x][y] == 0)
	{
		if (column() && row() && the_4_cube())
		{
			point[x][y] = z;
		}
		else if (z == 0)
		{
			point[x][y] = z;
		}
	}
	else
		cout << "這個位置不可填此數字" << endl;
}

void Output::display()
{

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << " | " << point[i][j] << " | ";
		}
		cout << endl;
	}
}

bool Output::winner()
{
	bool t = true;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (point[i][j] == 0)
			{
				t = false;
			}
		}
	}
	return t;
}