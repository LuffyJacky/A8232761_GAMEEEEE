#include "sudokuInput.h"
#include "sudokuCheck.h"
#include "sudokuOutput.h"
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void slow_print(const string& message, unsigned int time)
{
	for (const char c : message)
	{
		cout << c << flush;
		sleep_for(milliseconds(time));
	}
}

int main()
{
	Output s1;
	string message = "�ƿW�C���A�C���e�Х��\Ū�C���W�h�A�W�h�p�U:\n�Шϥ���L����J(�����C)�C�A�A��J��A�̫��X�Q�n�񪺼Ʀr\n���A���Ө}�n���C������\n�s�@�խ�:�L�Ӽ� �B���l�y�B����N";
	slow_print(message, 30);
	cout << endl;
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
