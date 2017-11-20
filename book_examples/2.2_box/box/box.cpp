#include <iostream>
#include "box.h"
using namespace std;

box::box(double a, double b, double c)
{
	x = a;
	y = b;
	z = c;
}

void box::vol()
{
	cout << "The volume of the box is: " << x * y * z << '\n';
}

int main()
{
	box box_1(1, 2, 3);
	box box_2(1, 1, 3.14);

	box_1.vol();
	box_2.vol();
}
