#ifndef INPUT_H
#define INPUT_H
#include <iostream>
#include <string>
using namespace std;

class Input
{
public:
	int x, y, z;
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
	Input();
	void set_num();
};

#endif // !INPUT_H