#ifndef CHECK_H
#define CHECK_H
#include "sudokuInput.h"

class Check : public Input
{
public:
	int check_cube();
	bool the_4_cube();
	bool row();
	bool column();
};

#endif // !Check_H

