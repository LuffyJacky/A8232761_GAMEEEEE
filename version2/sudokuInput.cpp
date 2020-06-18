#include "sudokuInput.h"
#include <iostream>
#include <string>
using namespace std;

Input::Input()
{
	int point[9][9];
}

void Input::set_num()
{
	cout << "請輸入行數" << endl;
	cin >> x;
	cout << "請輸入列數" << endl;
	cin >> y;
	cout << "請輸入要填入此空格的數字" << endl;
	cin >> z;
}