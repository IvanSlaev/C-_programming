#include <iostream>
#include "min_min_over.h"

using namespace std;

void coord::get_coords()
{
	cout << "Coords are: " << x << ", " << y << '\n';
}

coord& coord::operator--()
{
	x--;
	y--;

	return *this;
}

coord coord::operator--(int notused)
{
	coord temp;
	temp = *this;

	x--;
	y--;

	return temp;
}

int main()
{
	coord ob1(1, 2);

	(--ob1).get_coords();
	(ob1--).get_coords();
	return 0;
}
