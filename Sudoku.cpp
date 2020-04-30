#include <iostream>
using namespace std;

int main()
{
	int sudoku[9][9] = {5, 0, 4, 0, 7, 0, 9, 0, 2,
						0, 7, 0, 1, 0, 5, 0, 4, 0, 
						1, 0, 8, 0, 4, 0, 5, 0, 7,
						0, 5, 0, 7, 0, 1, 0, 2, 0,
						4, 0, 6, 0, 5, 0, 7, 0, 1,
						0, 1, 0, 9, 0, 4, 0, 5, 0,
						9, 0, 1, 0, 3, 0, 2, 0, 4,
						0, 8, 0, 4, 0, 9, 0, 3, 0,
						3, 0, 5, 0, 8, 0, 1, 0, 9};
	for (int i = 0; i < 9; i++)
	{
		cout << "|";
		for (int j = 0; j < 9; j++)
		{
			if (sudoku[i][j] == 0)
				cout << " " << " | ";
			else
				cout << sudoku[i][j] << " | ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}