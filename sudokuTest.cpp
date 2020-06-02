#include <iostream>
using namespace std;
class input
{
public:
	int point[9][9] = { 
	{5, 0, 4, 0, 7, 0, 9, 0, 2}, 
	{0, 7, 0, 1, 0, 5, 0, 4, 0},
	{1, 0, 8, 0, 4, 0, 5, 0, 7}, 
	{0, 5, 0, 7, 0, 1, 0, 2, 0}, 
	{4, 0, 6, 0, 5, 0, 7, 0, 1},
	{0, 1, 0, 9, 0, 4, 0, 5, 0},  
	{9, 0, 1, 0, 3, 0, 2, 0, 4}, 
	{0, 8, 0, 4, 0, 9, 0, 3, 0},
	{3, 0, 5, 0, 8, 0, 1, 0, 9 } };

	input()
	{
		cout << "Welcome to Sudoku " << endl;
        int point[9][9];
	}
	int x, y, z;
	 void set_num()
	{
		cout << "請輸入行數" << endl;
		cin >>x;
		cout << "請輸入列數" << endl;
		cin >> y;
		cout << "請輸入要填入此空格的數字" << endl;
		cin >> z;
	}
};
class check : public input
{
public:
	int check_cube()
	{
		int *p;
		p = &point[x][y];
		int r;
		if (p == &point[0][0] || p == &point[0][1] || p == &point[0][2] 
			|| p == &point[1][0] || p == &point[1][1] || p == &point[1][2] 
			|| p == &point[2][0] || p == &point[2][1] || p == &point[2][2])
		{
			return r = 1;
		}
		if (p == &point[0][3] || p == &point[0][4] || p == &point[0][5] 
			|| p == &point[1][3] || p == &point[1][4] || p == &point[1][5] 
			|| p == &point[2][4] || p == &point[2][4] || p == &point[2][5])
		{
			return r = 2;
		}
		if (p == &point[0][6] || p == &point[0][7] || p == &point[0][8] 
			|| p == &point[1][6] || p == &point[1][7] || p == &point[1][8] 
			|| p == &point[2][6] || p == &point[2][7] || p == &point[2][8])
		{
			return r = 3;
		}
		if (p == &point[3][0] || p == &point[3][1] || p == &point[3][2] 
			|| p == &point[4][0] || p == &point[4][1] || p == &point[4][2] 
			|| p == &point[5][0] || p == &point[5][1] || p == &point[5][2])
		{
			return r = 4;
		}
		if (p == &point[3][3] || p == &point[3][4] || p == &point[3][5] 
			|| p == &point[4][3] || p == &point[4][4] || p == &point[4][5] 
			|| p == &point[5][4] || p == &point[5][4] || p == &point[5][5])
		{
			return r = 5;
		}
		if (p == &point[3][6] || p == &point[3][7] || p == &point[3][8] 
			|| p == &point[4][6] || p == &point[4][7] || p == &point[4][8] 
			|| p == &point[5][6] || p == &point[5][7] || p == &point[5][8])
		{
			return r = 6;
		}
		if (p == &point[6][0] || p == &point[6][1] || p == &point[6][2] 
			|| p == &point[7][0] || p == &point[7][1] || p == &point[7][2] 
			|| p == &point[8][0] || p == &point[8][1] || p == &point[8][2])
		{
			return r = 7;
		}
		if (p == &point[6][3] || p == &point[6][4] || p == &point[6][5] 
			|| p == &point[7][3] || p == &point[7][4] || p == &point[7][5] 
			|| p == &point[8][4] || p == &point[8][4] || p == &point[8][5])
		{
			return r = 8;
		}
		if (p == &point[6][6] || p == &point[6][7] || p == &point[6][8] 
			|| p == &point[7][6] || p == &point[7][7] || p == &point[7][8] 
			|| p == &point[8][6] || p == &point[8][7] || p == &point[8][8])
		{
			return r = 9;
		}
	}

	bool the_4_cube()
	{
		bool  f = true;
		switch (check_cube())
		{
		case 1:
			if (z == point[0][0] || z == point[0][1] || z == point[0][2] 
			|| z == point[1][0] || z == point[1][1] || z == point[1][2] 
			|| z == point[2][0] || z == point[2][1] || z == point[2][2])
			{
				f = false;
			}
			break;
		case 2:
			if (z == point[0][3] || z == point[0][4] || z == point[0][5] 
			|| z == point[1][3] || z == point[1][4] || z == point[1][5] 
			|| z == point[2][4] || z == point[2][4] || z == point[2][5])
			{
				f = false;
			}
			break;
		case 3:
			if (z == point[0][6] || z == point[0][7] || z == point[0][8] 
			|| z == point[1][6] || z == point[1][7] || z == point[1][8] 
			|| z == point[2][6] || z == point[2][7] || z == point[2][8])
			{
				f = false;
			}
			break;
		case 4:
			if (z == point[3][0] || z == point[3][1] || z == point[3][2] 
			|| z == point[4][0] || z == point[4][1] || z == point[4][2] 
			|| z == point[5][0] || z == point[5][1] || z == point[5][2])
			{
				f = false;
			}
			break;
		case 5:
			if (z == point[3][3] || z == point[3][4] || z == point[3][5] 
			|| z == point[4][3] || z == point[4][4] || z == point[4][5] 
			|| z == point[5][4] || z == point[5][4] || z == point[5][5])
			{
				f = false;
			}
			break;
		case 6:
			if (z == point[3][6] || z == point[3][7] || z == point[3][8] 
			|| z == point[4][6] || z == point[4][7] || z == point[4][8] 
			|| z == point[5][6] || z == point[5][7] || z == point[5][8])
			{
				f = false;
			}
			break;
		case 7:
			if (z == point[6][0] || z == point[6][1] || z == point[6][2] 
			|| z == point[7][0] || z == point[7][1] || z == point[7][2] 
			|| z == point[8][0] || z == point[8][1] || z == point[8][2])
			{
				f = false;
			}
			break;
		case 8:
			if (z == point[6][3] || z == point[6][4] || z == point[6][5] 
			|| z == point[7][3] || z == point[7][4] || z == point[7][5] 
			|| z == point[8][4] || z == point[8][4] || z == point[8][5])
			{
				f = false;
			}
			break;
		case 9:
			if (z == point[6][6] || z == point[6][7] || z == point[6][8] 
			|| z == point[7][6] || z == point[7][7] || z == point[7][8] 
			|| z == point[8][6] || z == point[8][7] || z == point[8][8])
			{
				f = false;
			}
			break;
		}
		return f;
	}

	bool row()
	{
		bool t;
		for (int i = 0; i < 9; i++)
		{
			t = true;
			if (point[x][i] == z || point[x][i] == point[x][y])
			{
				t = false;
				break;
			}
		}
		return t;
	}

	bool column()
	{
		bool g;
		for (int i = 0; i < 9; i++)
		{
			g = true;
			if (point[i][y] == z || point[i][y] == point[x][y])
			{
				g = false;
				break;
			}
		}
		return g;
	}
};

class output : public check
{
public:
	void final_result()
	{
		if (column() && row() && the_4_cube())
		{
			point[x][y] = z;
		}
		else if(z == 0)
		{
			point[x][y] = z;
		}
		else
		{
			cout << "這個位置不可填此數字" << endl;
		}
	}

	void display()
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
	
	bool winner()
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
}s1;

int main()
{
	s1.display();
	while (true)
	{
		if (s1.winner())
		{
			cout << "YOU win " << endl;
			break;
		}
		else
		{
			s1.set_num();
			s1.final_result();
			s1.display();
		}
	}
	system("pause");
}
