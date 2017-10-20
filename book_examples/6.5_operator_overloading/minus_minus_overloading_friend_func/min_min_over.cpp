#include <iostream>
#include "min_min_over.h"

using namespace std;

void coord::get_coords()
{
	cout << "Coords are: " << x << ", " << y << '\n';
}

coord& operator--(coord& operand)
{
	operand.x--;
	operand.y--;

	return operand;
}

coord& operator--(coord& operand, int notused)
{

	operand.x--;
	operand.y--;

	return operand;
}

int main()
{
	coord ob1(1, 2);

	(--ob1).get_coords();
	(ob1--).get_coords();
	return 0;
}
