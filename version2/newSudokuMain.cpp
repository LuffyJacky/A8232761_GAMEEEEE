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
	string message = "數獨遊戲，遊玩前請先閱讀遊戲規則，規則如下:\n請使用鍵盤先輸入(直行橫列)列，再輸入行，最後輸出想要填的數字\n祝你有個良好的遊玩體驗\n製作組員:林承毅 、趙子慶、黃湘淇";
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
