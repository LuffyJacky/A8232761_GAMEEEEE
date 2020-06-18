#ifndef OUTPUT_H
#define OUTPUT_H
#include "sudokuCheck.h"

class Output : public Check
{
public:
	void final_result();
	void display();
	bool winner();
};

#endif // !OUTPUT_H

