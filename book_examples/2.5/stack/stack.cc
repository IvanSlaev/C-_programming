#include <iostream>
#include "stack.h"

using namespace std;

stack::stack()
{
    cout << "Constructing a stack\n";
    tos = 0;
}

void stack::push(char c)
{
    if (tos == SIZE) {
        cout << "Stack fill \n";
        return;
    }

    stck[tos] = c;
    tos++;
}

char stack::pop()
{
    if (tos == 0) {
        cout << "Stack empty\n";
    }

    tos--;
    return stck[tos];
}

int main()
{
    stack s1, s2;

    s1.push('x');
    s2.push('z');
    s1.push('y');
    s2.push('y');
    s1.push('z');
    s2.push('x');

    cout << "Stack 1: ";
    for (int i = 0; i < 3; ++i) {
         cout << s1.pop() << ", ";
    }
    cout << '\n';

    cout << "Stack 2: ";
    for (int i = 0; i < 3; ++i) {
         cout << s2.pop() << ", ";
    }
    cout << '\n';
}
