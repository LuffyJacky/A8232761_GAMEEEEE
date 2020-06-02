#include <iostream>
using namespace std;
class input
{
public:
	int point[4][4] = {
		{ 0,0,1,0 },
		{ 0,3,0,4 },
		{ 3,0,4,0 },
		{ 0,2,0,0 }
	};

	input()
	{
		cout << "Welcome to Sudoku " << endl;
        int point[4][4];
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
		if (p == &point[0][0] || p == &point[0][1] || p == &point[1][1] || p == &point[1][0])
		{
			return r = 1;
		}
		if (p == &point[0][2] || p == &point[0][3] || p == &point[1][2] || p == &point[1][3])
		{
			return r = 2;
		}
		if (p == &point[2][0] || p == &point[2][1] || p == &point[3][0] || p == &point[3][1])
		{
			return r = 3;
		}
		if (p == &point[2][2] || p == &point[2][3] || p == &point[3][2] || p == &point[3][3])
		{
			return r = 4;
		}
	}

	bool the_4_cube()
	{
		bool  f = true;
		switch (check_cube())
		{
		case 1:
			if (z == point[0][0] || z == point[0][1] || z == point[1][1] || z == point[1][0])
			{
				f = false;
			}
			break;
		case 2:
			if (z == point[0][2] || z == point[0][3] || z == point[1][2] || z == point[1][3])
			{
				f = false;
			}
			break;
		case 3:
			if (z == point[2][0] || z == point[2][1] || z == point[3][0] || z == point[3][1])
			{
				f = false;
			}
			break;
		case 4:
			if (z == point[2][2] || z == point[2][3] || z == point[3][2] || z == point[3][3])
			{
				f = false;
			}
			break;
		default:
			f = false;
			break;

		}
		return f;
	}

	bool row()
	{
		bool t;
		for (int i = 0; i < 4; i++)
		{
			t = true;
			if (point[x][i] == z)
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
		for (int i = 0; i < 4; i++)
		{
			g = true;
			if (point[i][y] == z)
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

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << " | " << point[i][j] << " | ";
			}
			cout << endl;
		}
	}
	
	bool winner()
	{
		bool t = true;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
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
